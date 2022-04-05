#include "pch.h"
#include "CppUnitTest.h"
#include "../CodeBase/FindMaxAverage.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(FindMaxAverageTest)
	{
	public:
		TEST_METHOD(DirectUse)
		{
			vector<int> nums{ 1,12,-5,-6,50,3 };
			FindMaxAverage solution;
			double result = solution.process(nums, 4);
			Assert::AreEqual(12.75000, result);
		}
	};
}
