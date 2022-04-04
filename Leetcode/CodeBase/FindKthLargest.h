#include <vector>
using namespace std;

class FindKthLargest
{
public:
	int process(vector<int>& nums, int k);
	void swap(vector<int>& nums, int i, int j);
	int random(int start, int end);
	int partition(vector<int>& nums, int lo, int hi);
};

