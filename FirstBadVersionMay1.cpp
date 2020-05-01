// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		unsigned int l = 1;
		unsigned int r = n;
		unsigned int m = (l + r) / 2;
		while (l < r)
		{
			if (!isBadVersion(m))
				l = m + 1;
			else
			{
				if (!isBadVersion(m - 1))
					return m;
				r = m - 1;
			}
			m = (l + r) / 2;
		}
		return m;
	}
};