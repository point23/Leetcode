#include "pch.h"
#include "SortColors.h"

void SortColors::process(vector<int>& nums)
{
	if (nums.size() < 2)
	{
		return;
	}
	// use i to maintain two 
	int zeroEndIndex = 0, twoStartIndex = nums.size(), i = 0;
	while (i < twoStartIndex)
	{
		if (nums[i] == 0)
		{
			swap(nums, i, zeroEndIndex);
			zeroEndIndex += 1;
			i += 1;
		}
		else if (nums[i] == 2)
		{
			twoStartIndex -= 1;
			swap(nums, i, twoStartIndex);
		}
		else
		{
			i += 1;
		}
	}
}

void SortColors::swap(vector<int>& nums, int i, int j)
{
	if (i == j)
		return;
	nums[i] = nums[i] + nums[j];
	nums[j] = nums[i] - nums[j];
	nums[i] = nums[i] - nums[j];
}
