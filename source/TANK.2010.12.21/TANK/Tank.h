//---------------------------------------------------------------------------
#ifndef __TANK_H__
#define __TANK_H__

#include "Types.hpp"
#include <vector.h>

const int GRID_LEN   = 44;
const TRect SCENE_RECT = TRect(0,0,11*GRID_LEN,GRID_LEN*11);

//---------------------------------------------------------------------------
class TComp
{
protected:
        // rect
        TRect rect;
        TRect src;
public:
        void SetRect(const TRect &in){rect = in;}
        void SetSrc(const TRect &in){src = in;}
        void SetSrc(TPoint ind);
        TRect getRect(){return rect;}
        TRect getSrc(){return src;}
        void Offset(const TPoint &bias){ OffsetRect(rect,bias.x,bias.y); }
};
//---------------------------------------------------------------------------
class Tank : public TComp
{
public:
        enum TANKDIR{T_LEFT=0,T_UP,T_RIGHT,T_DOWN} Dir;
        Tank(){SetSrc(TPoint(0,0));}
        virtual void SetDir(TANKDIR dir){ SetSrc(TPoint(dir,0)); Dir = dir; }
};
//---------------------------------------------------------------------------
class Obstacle : public TComp
{
public:
        Obstacle(){SetSrc(TPoint(1,3));}
};
//---------------------------------------------------------------------------
class Bullet : public TComp
{
public:
        TPoint v;
        Bullet(){SetSrc(TRect(20,20,25,25));}
};
//---------------------------------------------------------------------------
class GameManager
{
public:
        Tank *pMainTank;
        vector<Obstacle*> ObsVec;
        Bullet *pBul;

        GameManager();
        ~GameManager();

        void onKeyDown(WORD &Key);
        void Refresh();
        void GenBullet();
};
#endif
 