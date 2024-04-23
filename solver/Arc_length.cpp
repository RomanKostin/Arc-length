#include "Arc_length.h"
#include "cmath"
#include <sstream>



double Arc::Arc_length::ToRadian(const Angle::Angle& degree) const
{
	return degree.convert()*gradus_converter;
}

Arc::Arc_length::Arc_length(const Angle::Angle& first_point_longitude, const Angle::Angle& first_point_latitude, const Angle::Angle& second_point_longitude, const Angle::Angle& second_point_latitude)
{
	this->radian_arc_length = acos(sin(ToRadian(first_point_latitude))*sin(ToRadian(second_point_latitude))+cos(ToRadian(first_point_latitude))*cos(ToRadian(second_point_latitude))*(std::abs(ToRadian(first_point_longitude) -ToRadian(second_point_longitude))));
}

std::string Arc::Arc_length::ToString() const
{
	std::stringstream buffer{};
	buffer << this->radian_arc_length;
	return buffer.str();
}

std::ostream& Arc::operator<<(std::ostream& output, const Arc_length& arc)
{
	return output << arc.ToString();
}
