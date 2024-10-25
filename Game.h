#include <vector>
#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <iostream>
class Game
{
    std::vector<GameEntity *> entities;
    int numShips;

public:
    std::vector<GameEntity *> initGame(int numShips, int numMines, int gridWidth, int gridHeight)
    {
        this->numShips = numShips;
        for (int i = 0; i < numShips; i++)
        {
            std::tuple<int, int> position = Utils::generateRandomPos(gridWidth, gridHeight);
            Ship ship(std::get<0>(position), std::get<1>(position));
            ship.setType('S');
            entities.push_back(&ship);
        }
        for (int i = 0; i < numMines; i++)
        {
            std::tuple<int, int> position = Utils::generateRandomPos(gridWidth, gridHeight);
            Mine mine(std::get<0>(position), std::get<1>(position));
            entities.push_back(&mine);
        }
        std::cout << entities.size() << std::endl;
        return entities;
    }
    void gameLoop(int maxIterations, double mineDistanceThreshold) {}
};