#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
    const float EPSILON = 0.0001f;

    float area = std::fabs(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0f;
    float area_pbc = std::fabs(p.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - p.getY()) + c.getX() * (p.getY() - b.getY())) / 2.0f;
    float area_pac = std::fabs(a.getX() * (p.getY() - c.getY()) + p.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - p.getY())) / 2.0f;
    float area_pab = std::fabs(a.getX() * (b.getY() - p.getY()) + b.getX() * (p.getY() - a.getY()) + p.getX() * (a.getY() - b.getY())) / 2.0f;

    if (std::fabs((area_pbc + area_pab + area_pac) - area) < EPSILON)
        return true;
    
    return false;
}
