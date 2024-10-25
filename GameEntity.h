#include <tuple>
#ifndef GAMEENTITY_H
#define GAMEENTITY_H
class GameEntity
{
protected:
    enum GameEntityType
    {
        ExplosionType,
        MineType,
        NoneType,
        ShipType
    };
    std::tuple<int, int> position;
    GameEntityType type;

public:
    GameEntity(int x = 0, int y = 0, char type = 'N')
    {
        position = std::make_tuple(x, y);
        switch (type)
        {
        case 'E':
            this->type = ExplosionType;
            break;
        case 'M':
            this->type = MineType;
            break;
        case 'N':
            this->type = NoneType;
            break;
        case 'S':
            this->type = ShipType;
            break;
        }
    }
    std::tuple<int, int> getPos()
    {
        return position;
    }
    GameEntityType getType()
    {
        return type;
    }
    void setPos(int x, int y)
    {
        position = std::make_tuple(x, y);
    }
    void setType(char type)
    {
        switch (type)
        {
        case 'E':
            this->type = ExplosionType;
            break;
        case 'M':
            this->type = MineType;
            break;
        case 'N':
            this->type = NoneType;
            break;
        case 'S':
            this->type = ShipType;
            break;
        }
    }
};
#endif