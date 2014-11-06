#include "Tank.h"
void TComp::SetSrc(TPoint ind)
{
        TRect tmp = TRect(
                ind.x*GRID_LEN, ind.y*GRID_LEN,
                (ind.x+1)*GRID_LEN-1, (ind.y+1)*GRID_LEN-1);
        SetSrc(tmp);
}  

GameManager::GameManager()
{
        pMainTank = new Tank(); 
        pBul = NULL;

        Obstacle *pObs;

        // 4x4 matrix
        for(int i=2;i<9;i+=2)
        {
                for(int j=2;j<9;j+=2)
                {
                pObs = new Obstacle();
                pObs->SetRect(TRect(GRID_LEN*i,GRID_LEN*j,GRID_LEN*(i+1)-1,GRID_LEN*(j+1)-1));
                ObsVec.push_back(pObs);
                }
        }
        // init value of game
        pMainTank->SetRect(TRect(0,0,GRID_LEN-1,GRID_LEN-1));
        pMainTank->SetDir(Tank::T_RIGHT);
}

GameManager::~GameManager()
{
        if(pMainTank)
                delete pMainTank;

        vector<Obstacle*>::iterator ObsIt;
        for(ObsIt=ObsVec.begin();
                ObsIt != ObsVec.end();
                ObsIt ++)
        {
                delete (*ObsIt);
        }
}

void GameManager::onKeyDown(WORD &Key)
{
        // velocity
        const int vx = 11, vy = 11;
        TRect temp = pMainTank->getRect();
        TPoint bias = TPoint(0,0);

        // offsets the temp rect(next step)
        switch(Key)
        {
        case VK_UP:
                pMainTank->SetDir(Tank::T_UP);
                bias.y =-vy;
                break;
        case VK_DOWN:
                pMainTank->SetDir(Tank::T_DOWN);
                bias.y = vy;
                break;
        case VK_LEFT:
                pMainTank->SetDir(Tank::T_LEFT);
                bias.x =-vx;
                break;
        case VK_RIGHT:
                pMainTank->SetDir(Tank::T_RIGHT);
                bias.x = vx;
                break;
        case VK_SPACE:
                if(pBul)
                        break;
                GenBullet();
                break;
        default:
                break;
        }
        OffsetRect(temp,bias.x,bias.y);

        TRect temp2;

        vector<Obstacle*>::iterator ObsIt;
        for(ObsIt=ObsVec.begin();
                ObsIt != ObsVec.end();
                ObsIt ++)
        {
                if(IntersectRect(temp2,temp,(*ObsIt)->getRect()))
                        return;
        }
        // In scene checking
        IntersectRect(temp2,temp,SCENE_RECT);
        if(EqualRect(temp2,temp))
                pMainTank->Offset(bias);
}

void GameManager::Refresh()
{
        if(pBul)
        {
                pBul->Offset(pBul->v);
                Bullet temp = *pBul;
                TRect temp2;

                // delete if touch Obs
                
                vector<Obstacle*>::iterator ObsIt;
                for(ObsIt=ObsVec.begin();
                        ObsIt != ObsVec.end();
                        ObsIt ++)
                {
                        if(IntersectRect(temp2,temp.getRect(),(*ObsIt)->getRect()))
                        {
                                delete pBul;
                                pBul = NULL;
                                return;
                        }
                }

                // delete if touch bound
                IntersectRect(temp2,temp.getRect(),SCENE_RECT);
                if(!EqualRect(temp2,temp.getRect()))
                {
                        delete pBul;
                        pBul = NULL;
                        return;
                }
        }
}

void GameManager::GenBullet()
{
        // velocity
        const int vx = 11, vy = 11;
        if(pBul)
                return;
        pBul = new Bullet();
        TPoint cent = CenterPoint(pMainTank->getRect());
        pBul->SetRect(TRect(cent.x-2,cent.y-2,cent.x+2,cent.y+2));
        switch(pMainTank->Dir)
        {
        case Tank::T_LEFT:
                pBul->v = TPoint(-vx,0);
                break;
        case Tank::T_RIGHT:
                pBul->v = TPoint( vx,0);
                break;
        case Tank::T_UP:
                pBul->v = TPoint( 0,-vy);
                break;
        case Tank::T_DOWN:
                pBul->v = TPoint( 0, vy);
                break;
        default:
                break;
        };
}
