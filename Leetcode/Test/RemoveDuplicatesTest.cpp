#include "pch.h"
#include "CppUnitTest.h"
#include "../CodeBase/RemoveDuplicates.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(RemoveDuplicatesTest)
	{
	public:
		TEST_METHOD(DirectUse)
		{
			vector<int> nums{ 0,0,1,1,1,2,2,3,3,4 };
			// initial: 
			//		setup  slow ptr: i = -1;  fast pointer: j = 0;
			//		nums   [ 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 ]
			//		ptr	     i  j
			//		index    0  1
			// 
			// rnd1:       while (nums[j] == nums[j-1]) j++;
			//		nums   [ 0, 1, 1, 1, 1, 2, 2, 3, 3, 4 ]
			//		ptr         i  j
			//		index       1  2
			//		op		nums[++i] =  nums[j];
			// 
			// final:
			//		update nums by index; 
			//		return i;

			RemoveDuplicates solution;
			int result = solution.process(nums);
			Assert::AreEqual(5, result);
			Assert::AreEqual(4, nums[4]);
		}
	};
}
