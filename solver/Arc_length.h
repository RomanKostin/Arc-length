#pragma once
#include "..\solver\Angle.h"
#include "..\solver\Angle.cpp"
namespace Arc
{
	class Arc_length
	{
	private:
		/*
		*@brief объявление класса угловой меры, как дружественного
		*/
		friend Angle::Angle;
		
		/*
		*@brief длина дуги между двумя точками на сфере в радианах
		*/
		double radian_arc_length;
	public:
		
		/*
		*@brief конструктор класса длина дуги
		*@param first_point_longitude - долгота первой точки
		*@param first_point_latitude - широта первой точки
		*@param second_point_longitude - долгота второй точки
		*@param second_point_latitude - широта второй точки
		*/
		Arc_length(const Angle::Angle& first_point_longitude,const Angle::Angle& first_point_latitude,const Angle::Angle& second_point_longitude,const Angle::Angle& second_point_latitude);
	};
}