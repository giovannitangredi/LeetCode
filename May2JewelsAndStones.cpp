class Solution {
public:
	int numJewelsInStones(string J, string S) {
		unordered_set<char> jew;
		int count = 0;
		for (char c : J)
			jew.insert(c);
		for (char c : S)
		{
			if (jew.find(c) != jew.end())
				count++;
		}
		return count;
	}
};