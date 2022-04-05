#include "pch.h"
#include "FindMaxAverage.h"

double FindMaxAverage::process(vector<int>& nums, int k)
{
    double maxSum = 0, sum = 0;
    int lo = 0, hi = 0;
    for (; hi < k; hi++)
    {
        sum += nums[hi];
    }
    hi -= 1;
    maxSum = sum;
    while (hi < nums.size() - 1)
    {
        sum -= nums[lo++];
        sum += nums[++hi];
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    return maxSum / k;
}
