#include "pch.h"
#include "RemoveDuplicates.h"

int RemoveDuplicates::process(vector<int>& nums)
{
	if (nums.size() <= 1)
	{
		return nums.size();
	}
	int i = 0, j = 1;
	while (j < nums.size())
	{
		if (nums[j] != nums[j - 1])
		{
			nums[++i] = nums[j];
		}
		j++;
	}
	return i + 1;
}
