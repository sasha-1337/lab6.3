#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3/lab6_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod6_3)
		{
			int t;
			const int n = 4;
			int a[n] = { -1,5,-7,2 };
			t = sort(a, n);
			int r[n] = { 5,-1,2,-7 };
			int u;
			u = sort(r, n);

			Assert::AreEqual(t, u);
		}
	};
}
