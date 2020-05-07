class Solution {
public:
	int majorityElement(vector<int>& nums) {
		unordered_map<int, int> map;
		int n = nums.size();
		for (int x : nums)
		{
			map[x]++;
			if (map[x] > n / 2)
				return x;
		}
		return -1e5; //in case it doesn't exist    
	}
};