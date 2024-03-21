#include <iostream>
#include "..\solver\Angle.h"
#include "..\solver\Angle.cpp"

int main(void)
{
	Angle:: Angle a(3,4,11);
	Angle::Angle b(a);
	Angle::Angle c(-3,4,11);
	if (a==b)
	{
		std::cout << "== working" << std::endl;
	}
	if (a!=c)
	{
		std::cout << "!= working" << std::endl;
	}
	a.print();
	b.print();
	c.print();
	return 0;
}