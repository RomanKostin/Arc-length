#include "Arc_length.h"
#include "cmath"
#include <sstream>

Arc::Arc_length::Arc_length(const Angle::Angle& first_point_longitude, const Angle::Angle& first_point_latitude, const Angle::Angle& second_point_longitude, const Angle::Angle& second_point_latitude)
{
	this->radian_arc_length = acos(sin(first_point_latitude.convert()*gradus_converter)*sin(second_point_latitude.convert() * gradus_converter)+cos(first_point_latitude.convert() * gradus_converter)*cos(second_point_latitude.convert() * gradus_converter)*(fabs(first_point_longitude.convert() * gradus_converter -second_point_longitude.convert() * gradus_converter)));
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
