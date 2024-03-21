#pragma once
#include <limits>
#include <iostream>
namespace Angle
{
	class Angle
	{
	private:
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
		*@brief оператор "==" для класса Angle
		*/
		bool operator == (const Angle& angle) const;
		
		/*
		*@brief оператор "!=" для класса Angle
		*/
		bool operator != (const Angle& angle) const;

		/*
		*@brief функция вывода всех значений градуса
		*/
		void print(); // исправить на std::string
	};
}