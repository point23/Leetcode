#include "pch.h"
#include "CppUnitTest.h"
#include "../CodeBase/SortColors.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(SortColorTest)
	{
	public:
		TEST_METHOD(DirectUse)
		{
			vector<int> nums{ 2,0,2,1,1,0 };
			SortColors solution;

			// result: {0, 0, 1, 1, 2, 2}
			solution.process(nums);

			Assert::AreEqual(1, nums[2]);
			Assert::AreEqual(2, nums[5]);
		}

		TEST_METHOD(NumsLenLessThan2)
		{
			vector<int> nums{ 2 };
			SortColors solution;

			// result: { 2 }
			solution.process(nums);
			Assert::AreEqual(2, nums[0]);
		}

		TEST_METHOD(NumsAllTheSame)
		{
			vector<int> nums{ 2, 2 };
			SortColors solution;

			// result: { 2, 2 }
			solution.process(nums);
			Assert::AreEqual(2, nums[0]);
		}
	};
}
