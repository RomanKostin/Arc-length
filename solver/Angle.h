#pragma once
#include <limits>
#include <iostream>
namespace Angle
{
	class Angle
	{
	private:
		/*
		*@brief значение для перевода секунд и минут в градусы
		*/
		static const int factor = 60;

		/*
		*@brief значение в градусах
		*/
		int degrees{ 0 };

		/*
		*@brief значение в минутах
		*/
		int minutes{ 0 };

		/*
		*@brief значение в секундах
		*/
		double seconds{ 0 };

		/*
		*@brief функция swap для класса Angle
		*/
		void swap(Angle& angle);

	public:
		/*
		*@brief конструктор для случая, когда введены все значения об угле
		*/
		Angle(int degr, int min, double sec);

		/*
		*@brief конструктор для случая, когда введено только значение в секундах, которые переводятся в минуты, а затем в градусы
		*/
		Angle(double sec);

		/*
		*@brief конструктор копирования
		*/
		Angle(Angle& A) = default;
		
		/*
		*@brief оператор "=" для класса Angle
		*/
		Angle& operator = (const Angle& angle) = default;

		/*
		*@brief деструктор класса Angle
		*/
		~Angle() = default;

		/*
		*@brief оператор "==" для класса Angle
		*/
		bool operator == (const Angle& angle) const;
		
		/*
		*@brief оператор "!=" для класса Angle
		*/
		bool operator != (const Angle& angle) const;

		/*
		*@brief оператор "<<" для класса Angle
		*/
		friend std::ostream& operator<<(std::ostream& output,const Angle& angle);

		/*
		*@brief оператор ">>" для класса Angle
		*/
		friend std::istream& operator>>(std::istream& input, Angle& angle);

	};
}