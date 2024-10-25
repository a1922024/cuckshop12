#include <vector>
#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <iostream>

int main()
{
    Ship ship(1, 1);
    std::cout << ship.getType() << ": (" << std::get<0>(ship.getPos()) << "," << std::get<1>(ship.getPos()) << ")" << std::endl;
    ship.move(1, 1);
    std::cout << ship.getType() << ": (" << std::get<0>(ship.getPos()) << "," << std::get<1>(ship.getPos()) << ")" << std::endl;
    Mine mine(2, 2);
    Explosion explosion(2, 2);
    explosion.apply(&ship);
    std::cout << ship.getType() << ": (" << std::get<0>(ship.getPos()) << "," << std::get<1>(ship.getPos()) << ")" << std::endl;
}