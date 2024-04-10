#pragma once
#include "..\solver\Angle.h"
#include "..\solver\Angle.cpp"
namespace Arc
{
	class Arc_length
	{
	private:
		/*
		*@brief ���������� ������ ������� ����, ��� ��������������
		*/
		friend Angle::Angle;
		
		/*
		*@brief ����� ���� ����� ����� ������� �� ����� � ��������
		*/
		double radian_arc_length;
	public:
		
		/*
		*@brief ����������� ������ ����� ����
		*@param first_point_longitude - ������� ������ �����
		*@param first_point_latitude - ������ ������ �����
		*@param second_point_longitude - ������� ������ �����
		*@param second_point_latitude - ������ ������ �����
		*/
		Arc_length(const Angle::Angle& first_point_longitude,const Angle::Angle& first_point_latitude,const Angle::Angle& second_point_longitude,const Angle::Angle& second_point_latitude);
	};
}