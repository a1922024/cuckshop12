#ifndef UTILS_H
#define UTILS_H
#include <tuple>
#include <random>
class Utils
{
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight)
    {
        return std::make_tuple(rand() % (gridWidth + 1), rand() % (gridHeight + 1));
    }
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2)
    {
        int xdistance = std::get<0>(pos1) - std::get<0>(pos2);
        int ydistance = std::get<1>(pos1) - std::get<1>(pos2);
        double distance = sqrt(xdistance * xdistance + ydistance * ydistance);
        return distance;
    }
};
#endif