#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.1/lab_05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest051
{
	TEST_CLASS(UnitTest051)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1.5;
			double test_var = pow(sin(a), 2) + pow(a, 2) + 1;
			Assert::AreEqual(test_var,f(a));
		}
	};
}
