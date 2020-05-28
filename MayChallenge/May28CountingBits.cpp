class Solution {
public:
	vector<int> countBits(int num) {
		vector<int> ans;
		for (int i = 0; i <= num; i++)
		{
			int x = i;
			int sum = 0;
			while (x)
			{
				sum += x % 2;
				x /= 2;
			}
			ans.push_back(sum);
		}
		return ans;
	}
};