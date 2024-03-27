#include <iostream>
#include "Angle.h"

Angle::Angle::Angle(int degr, int min, double sec)
{
	if (min<0 || sec < -DBL_EPSILON || min>60 || sec - 60 > DBL_EPSILON)
	{
		throw std::invalid_argument("wrong angle!");
	}
	this->degrees = degr;
	this->minutes = min;
	this->seconds = sec;
}

Angle::Angle::Angle(double sec)
{
	int negative = 1, temp_min;
	if (sec < DBL_EPSILON)
	{
		sec *= -1;
		negative = -1;
	}
	temp_min = sec / 60;
	this->degrees = negative*(temp_min/60);
	this->minutes = temp_min%60;
	this->seconds = fmod(sec,60);
}



bool Angle::Angle::operator==(const Angle& angle) const
{
	return(this->degrees == angle.degrees && this->minutes == angle.minutes && this->seconds == angle.seconds);
}

bool Angle::Angle::operator!=(const Angle& angle) const
{
	return (this->degrees != angle.degrees || this->minutes != angle.minutes || this->seconds != angle.seconds);
}

std::ostream& Angle::operator<<(std::ostream& output, const Angle& angle)
{
	output << angle.degrees << " degrees " << angle.minutes << " minutes " << angle.seconds << " seconds ";
	return output;
}

std::istream& Angle::operator>>(std::istream& input, Angle& angle)
{
	input >> angle.degrees >> angle.minutes >> angle.seconds;
	if (angle.minutes<0 || angle.seconds < -DBL_EPSILON || angle.minutes>60 || angle.seconds - 60 > DBL_EPSILON)
	{
		throw std::invalid_argument("wrong angle!");
	}
	return input;
}