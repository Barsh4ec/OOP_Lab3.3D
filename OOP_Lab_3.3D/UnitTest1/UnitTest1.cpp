#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_3.3D/Fraction_public.cpp"
#include "../OOP_Lab_3.3D/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction_public a(12, 32);
			Fraction_public b(32, 12);
			Assert::IsTrue(a < b);
		}
	};
}
