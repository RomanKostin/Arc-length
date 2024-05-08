#include <iostream>
#include "..\solver\Angle.h"
#include "..\solver\Arc_length.h"

int main(void)
{
	Angle:: Angle a(10,0,0);
	Angle::Angle b(a);
	Angle::Angle c(20,0,0);
	Angle::Angle d(20,0,0);
	Arc::Arc_length arclength(a,b,c,d);
	std::cin >> a;
	std::cout << a << std::endl << d<<std::endl << arclength;
	return 0;
} 