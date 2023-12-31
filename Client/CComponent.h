#pragma once
#include "CEntity.h"
// 컴포넌트 설계 

class CObj;

class CComponent :
    public CEntity
{
private:
    CObj* const m_pOwner;

public:
    CObj* GetOwner() { return m_pOwner; }


public:
    virtual void tick(float _DT) {}
    virtual void finaltick(float _DT) = 0;
    virtual void render(HDC _dc) {} // 컴포넌트 그려낼것 

public:
    CComponent(CObj* _Owner);
    ~CComponent();
};