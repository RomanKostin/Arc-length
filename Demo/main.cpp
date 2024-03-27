#include <iostream>
#include "..\solver\Angle.h"
#include "..\solver\Angle.cpp"

int main(void)
{
	Angle:: Angle a(3,4,11);
	Angle::Angle b(a);
	Angle::Angle c(-3,4,11);
	Angle::Angle d(7201);
	std::cin >> a;
	std::cout << a << std::endl << d;
	return 0;
}