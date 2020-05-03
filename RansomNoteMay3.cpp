class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		unordered_map<char, int> ransom;
		unordered_map<char, int> mg;
		for (char c : ransomNote)
			ransom[c]++;
		for (char c : magazine)
			mg[c]++;
		for (auto it = ransom.begin(); it != ransom.end(); it++)
			if (mg[it->first] < it->second)
				return false;
		return true;
	}
};