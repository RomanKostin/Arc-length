#pragma once
#include <limits>
#include <iostream>
namespace Angle
{
	class Angle
	{
	private:
		/*
		*@brief �������� � ��������
		*/
		int degrees{ 0 };

		/*
		*@brief �������� � �������
		*/
		int minutes{ 0 };

		/*
		*@brief �������� � ��������
		*/
		double seconds{ 0 };

	public:

		/*
		*@brief ����������� ��� ������, ����� ������� ��� �������� �� ����
		*/
		Angle(int degr, int min, double sec);

		/*
		*@brief ����������� ��� ������, ����� ������� ������ �������� � ��������, ������� ����������� � ������, � ����� � �������
		*/
		Angle(double sec);

		/*
		*@brief ����������� �����������
		*/
		Angle(Angle& A) = default;

		/*
		*@brief �������� "==" ��� ������ Angle
		*/
		bool operator == (const Angle& angle) const;
		
		/*
		*@brief �������� "!=" ��� ������ Angle
		*/
		bool operator != (const Angle& angle) const;

		/*
		*@brief ������� ������ ���� �������� �������
		*/
		void print(); // ��������� �� std::string
	};
}