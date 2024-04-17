#pragma once
#include "..\solver\Angle.h"
namespace Arc
{
	class Arc_length
	{
	private:
		/*
		*@brief длина дуги между двумя точками на сфере в радианах
		*/
		double radian_arc_length;
		static const int gradus_converter = 0.01745329251;
	public:
		
		/*
		*@brief конструктор класса длина дуги
		*@param first_point_longitude - долгота первой точки
		*@param first_point_latitude - широта первой точки
		*@param second_point_longitude - долгота второй точки
		*@param second_point_latitude - широта второй точки
		*/
		Arc_length(const Angle::Angle& first_point_longitude,const Angle::Angle& first_point_latitude,const Angle::Angle& second_point_longitude,const Angle::Angle& second_point_latitude);
	
		/*
		*@brief оператор "<<" для класса длина дуги
		*/
		friend std::ostream& operator<<(std::ostream& output, const Arc_length &arc);

		/*
		*@brief ToString для класса длина дуги
		*/
		std::string ToString() const;
	};
}