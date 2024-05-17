#include "Point.hpp"

/*
Calculate the area of the given triangle, i.e., the area of the triangle ABC in the above diagram. 

Area A = [ a.x(b.y – c.y) + b.x(c.y – a.y) + c.x(a.y-b.y)]/2 

Calculate the area of the triangle PAB. We can use the same formula for this. Let this area be A1. 

Calculate the area of the triangle PBC. Let this area be A2. 

Calculate the area of the triangle PAC. Let this area be A3. 

If P lies inside the triangle, then A1 + A2 + A3 must be equal to A. 
*/

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float area = (a.x *(b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y) )/2;

	float area_pbc = (p.x *(b.y - c.y) + b.x * (c.y - p.y) + c.x * (p.y - b.y) )/2;

	float area_pac = (a.x *(p.y - c.y) + p.x * (c.y - a.y) + c.x * (a.y - p.y) )/2;
	
	float area_pab = (a.x *(b.y - p.y) + b.x * (p.y - a.y) + p.x * (a.y - b.y) )/2;

	area_pbc + area_pab + area_pac == area ? true : false;
}