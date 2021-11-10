#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_6.2.2\lab_6.2.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { 1, 2, 3, 4, 5 };

			int max = a[0];

			for (int i = 1; i < n; i++)
				if (a[i] > max)
					max = a[i];
			Assert::AreEqual(5, max);
		}
	};
}
