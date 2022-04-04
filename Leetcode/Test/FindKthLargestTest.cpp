#include "pch.h"
#include "CppUnitTest.h"
#include "../CodeBase/FindKthLargest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(FindKthLargestTest)
	{
	public:
		TEST_METHOD(DirectUse)
		{
			vector<int> nums{3, 2, 1, 5, 6, 4};
			int k = 2;
			FindKthLargest solution;
			Assert::AreEqual(5, solution.process(nums, k));
		}
	};
}
