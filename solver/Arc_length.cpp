#include "Arc_length.h"
#include "cmath"

Arc::Arc_length::Arc_length(const Angle::Angle& first_point_longitude, const Angle::Angle& first_point_latitude, const Angle::Angle& second_point_longitude, const Angle::Angle& second_point_latitude)
{
	this->radian_arc_length = acos(sin(first_point_latitude.convert())*sin(second_point_latitude.convert())+cos(first_point_latitude.convert())*cos(second_point_latitude.convert())*(fabs(first_point_longitude.convert()-second_point_longitude.convert())));
}
