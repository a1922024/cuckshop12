#ifndef MINE_H
#define MINE_H
#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity
{
public:
    Mine(int x, int y)
    {
        position = std::make_tuple(x, y);
        type = MineType;
    }
    Explosion explode()
    {
        return Explosion(std::get<0>(position), std::get<1>(position));
        type = NoneType;
    }
};
#endif