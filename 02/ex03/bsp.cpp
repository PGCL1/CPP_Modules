#include "Point.hpp"

/*
Calculate the area of the given triangle, i.e., the area of the triangle ABC in the above diagram. 

Area A = [ a.x(b.y – c.y) + b.x(c.y – a.y) + c.x(a.y-b.y)]/2 

Calculate the area of the triangle PAB. We can use the same formula for this. Let this area be A1. 

Calculate the area of the triangle PBC. Let this area be A2. 

Calculate the area of the triangle PAC. Let this area be A3. 

If P lies inside the triangle, then A1 + A2 + A3 must be equal to A. 
*/

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	float area = (a.getX() *(b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()) )/2;

	float area_pbc = (p.getX() *(b.getY() - c.getY()) + b.getX() * (c.getY() - p.getY()) + c.getX() * (p.getY() - b.getY()) )/2;

	float area_pac = (a.getX() *(p.getY() - c.getY()) + p.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - p.getY()) )/2;
	
	float area_pab = (a.getX() *(b.getY() - p.getY()) + b.getX() * (p.getY() - a.getY()) + p.getX() * (a.getY() - b.getY()) )/2;

	return (area_pbc + area_pab + area_pac == area ? true : false);
}
