#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.5/Pair.h"
#include "../lab2.5/Pair.cpp"
#include "../lab2.5/Rational.h"
#include "../lab2.5/Rational.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(2, 10), b(2, 10);
			Assert::AreEqual(a == b, true);
		}
	};
}
