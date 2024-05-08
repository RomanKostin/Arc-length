#include "pch.h"
#include "CppUnitTest.h"
#include "cmath"
#include "..\solver\Angle.h"
#include "..\solver\Arc_length.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AngleTest
{
	TEST_CLASS(AngleTest)
	{
	public:
		TEST_METHOD(operator_equal_equal)
		{
			int deg = 1, min = 1;
			double sec = 1.1;
			Angle::Angle a(deg, min, sec);
			Angle::Angle b(deg,min,sec);
			Assert::IsTrue(a==b);
		}

		TEST_METHOD(operator_not_equal)
		{
			Angle::Angle a(1,1,1);
			Angle::Angle b(2,2,2);
			Assert::IsTrue(a!=b);
		}

		TEST_METHOD(seconds_to_degrees)
		{
			Angle::Angle a(-3601);
			Angle::Angle b(-1, 0, 1);
			Assert::IsTrue(a==b);
		}

		TEST_METHOD(seconds_equal_360_degrees)
		{
			Angle::Angle a(12960000); //3600*3600
			Angle::Angle b(0);
			Assert::IsTrue(a == b);
		}

		TEST_METHOD(seconds_value_is_more_than_360_degrees)
		{
			Angle::Angle a(12960001); //3600*3600+1
			Angle::Angle b(1);
			Assert::IsTrue(a == b);
		}
	};
	TEST_CLASS(Arc_length_test)
	{
		TEST_METHOD(Arc_lenght_equal_to_double)
		{
			Angle::Angle flo(0);
			Angle::Angle fla(0);
			Angle::Angle slo(0);
			Angle::Angle sla(0);
			Arc::Arc_length actual(flo, fla, slo, sla);
			double radian = (std::numbers::pi_v<double>) / 180;
			double expected = acos(sin(0 * radian) * sin(0 * radian) + cos(0 * radian) * cos(0 * radian) * (std::abs(0 * radian - 0 * radian)));
			Assert::AreEqual(actual.GetRadianLength(), expected);
		}
	};
}
