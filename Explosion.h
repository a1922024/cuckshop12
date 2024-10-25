#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "Effect.h"
#include "GameEntity.h"

class Explosion : public GameEntity, public Effect
{
public:
    Explosion(int x, int y)
    {
        position = std::make_tuple(x, y);
        type = ExplosionType;
    }
    void apply(GameEntity *entity)
    {
        entity->setPos(-1, -1);
        entity->setType('N');
    }
};
#endif