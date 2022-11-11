#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { 1,2,3,4,5 };
			int s;
			s = (a, n);
			Assert::AreEqual(s,5);
		}
	};
}
