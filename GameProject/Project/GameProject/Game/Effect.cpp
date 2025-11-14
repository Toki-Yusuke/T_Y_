#include "Effect.h"

static TexAnim _bomb_anim[] = 
{

            { 0,4 },
            { 1,4 },
            { 2,4 },
            { 3,4 },
            { 4,4 },
};
TexAnimData Effect:: _bomb_anim_data[] = 
{
        ANIMDATA(_bomb_anim),
};

Effect::Effect(const char*name, const CVector2D& pos) :Base(eType_Effect) 
{
    m_img = COPY_RESOURCE(name, CImage);
    m_pos = pos;
    m_img.SetCenter(192 / 2, 192 / 2);
    m_img.SetSize(192, 192);
    m_img.ChangeAnimation(0, false);
}

void Effect::Update()
{
    m_img.UpdateAnimation();
    if (m_img.CheckAnimationEnd())
        SetKill();
}

void Effect::Draw()
{
    m_img.SetPos(GetScreenPos(m_pos));
    m_img.Draw();
}
