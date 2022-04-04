#include "pch.h"
#include "FindKthLargest.h"
#include "time.h"

int FindKthLargest::process(vector<int>& nums, int k)
{
	int res = 0, lo = 0, hi = nums.size() - 1, target = nums.size() - k;
	while (true)
	{
		int pindex = partition(nums, lo, hi);
		if (pindex == target)
		{
			res = nums[pindex];
			break;
		}
		else if (pindex < target)
		{
			lo = pindex + 1;
		}
		else
		{
			hi = pindex - 1;
		}
	}

	return res;
}

void FindKthLargest::swap(vector<int>& nums, int i, int j)
{
	if (i == j) return;
	nums[i] = nums[i] + nums[j];
	nums[j] = nums[i] - nums[j];
	nums[i] = nums[i] - nums[j];
}

int FindKthLargest::random(int start, int end)
{
	srand((unsigned)time(NULL));
	return (rand() % (end - start)) + start;
}

int FindKthLargest::partition(vector<int>& nums, int lo, int hi)
{
	int randomIndex = random(lo, hi + 1);
	swap(nums, lo, randomIndex);
	int pivot = nums[lo];
	while (lo < hi)
	{
		while (lo < hi && nums[hi] > pivot) hi--;
		nums[lo] = nums[hi];
		while (lo < hi && nums[lo] <= pivot) lo++;
		nums[hi] = nums[lo];
	}
	nums[lo] = pivot;
	return lo;
}