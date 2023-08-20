#include "Point.hpp"

bool bsp(const Point A, const Point B, const Point C, const Point P)
{
    float totalArea = area(A, B, C);
    float u = area(P, B, C);
    float v = area(A, P, C);
    float w = area(A, B, P);

    return u != 0 && v != 0 && w != 0 && u + v + w == totalArea;
}