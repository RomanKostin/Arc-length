#include <iostream>
#include "Angle.h"

Angle::Angle::Angle(int degr, int min, double sec)
{
	if (min<0 || sec < 0 || min>60 || sec - 60 > DBL_EPSILON)
	{
		throw std::invalid_argument("wrong angle!");
	}
	this->degrees = degr;
	this->minutes = min;
	this->seconds = sec;
}

Angle::Angle::Angle(double sec)
{
	int negative = 1;
	if (sec < DBL_EPSILON)
	{
		sec *= -1;
		negative = -1;
	}
	while (sec - 60 > DBL_EPSILON)
	{
		this->minutes++;
		if (this->minutes > 60)
		{
			this->degrees++;
			this->minutes = 0;
		}
		sec -= 60;
	}
	this->degrees *= negative;
	this->seconds = sec;
}



bool Angle::Angle::operator==(const Angle& angle) const
{
	return(this->degrees == angle.degrees && this->minutes == angle.minutes && this->seconds == angle.seconds);
}

bool Angle::Angle::operator!=(const Angle& angle) const // не работает (раньше было как сверху, только наоборот)
{
	return !this == angle;
}

void Angle::Angle::print() // исправить на std::string
{
	std::cout << this->degrees << "`" << this->minutes << "'" << this->seconds << "\"" << std::endl;
}
