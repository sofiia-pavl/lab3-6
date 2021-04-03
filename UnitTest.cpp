#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3-6/B1.h"
#include "C:\Users\Софія\source\repos\lab3-6\lab3-6\B1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 3;
			B1 b(a);
			Assert::AreEqual(a, b.getb1());
		}
	};
}
