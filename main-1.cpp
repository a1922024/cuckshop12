#include "Utils.h"
#include <iostream>

int main()
{
    std::tuple<int, int> pos1 = Utils::generateRandomPos(5, 5);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(5, 5);
    double dist1 = Utils::calculateDistance(pos1, pos2);
    std::cout << "The distance between (" << std::get<0>(pos1) << "," << std::get<1>(pos1) << ") and (" << std::get<0>(pos2) << "," << std::get<1>(pos2) << ") is: " << dist1 << std::endl;

    std::tuple<int, int> pos3 = Utils::generateRandomPos(10, 10);
    std::tuple<int, int> pos4 = Utils::generateRandomPos(10, 10);
    double dist2 = Utils::calculateDistance(pos3, pos4);
    std::cout << "The distance between (" << std::get<0>(pos3) << "," << std::get<1>(pos3) << ") and (" << std::get<0>(pos4) << "," << std::get<1>(pos4) << ") is: " << dist2 << std::endl;

    std::tuple<int, int> pos5 = Utils::generateRandomPos(20, 20);
    std::tuple<int, int> pos6 = Utils::generateRandomPos(20, 20);
    double dist3 = Utils::calculateDistance(pos5, pos6);
    std::cout << "The distance between (" << std::get<0>(pos5) << "," << std::get<1>(pos5) << ") and (" << std::get<0>(pos6) << "," << std::get<1>(pos6) << ") is: " << dist3 << std::endl;

    return 0;
}