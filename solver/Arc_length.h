#pragma once
#include "..\solver\Angle.h"
#include <numbers>
namespace Arc
{
	class Arc_length
	{
	private:
		/*
		*@brief длина дуги между двумя точками на сфере в радианах
		*/
		double radian_arc_length;
		
		/*
		*@brief константа для перевода в радианы
		*/
		static constexpr double gradus_converter = (std::numbers::pi_v<double>)/180 ;
		
		/*
		*@brief метод класса длина дуги, который возвращает значение в радианах
		*/
		double ToRadian(const Angle::Angle& degree) const;
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

		/*
		*@brief геттер для arc_length
		*@return значение в радианах
		*/
		double GetRadianLength() const;
	};
}