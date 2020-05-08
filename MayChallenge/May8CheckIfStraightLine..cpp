class Solution {
public:
	bool checkStraightLine(vector<vector<int>>& coordinates) {
		if (coordinates.size() == 2)
			return true;
		int k;
		if ((coordinates[1][0] - coordinates[0][0]) == 0)
		{
			for (int i = 2; i < coordinates.size(); i++)
			{
				if (coordinates[i][1] != coordinates[i - 1][1])
					return false;
			}
		}
		else {
			k = (coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0]);
			int c = coordinates[0][1] - k * coordinates[0][0];
			for (int i = 2; i < coordinates.size(); i++)
			{
				if (coordinates[i][1] != (k*coordinates[i][0] + c))
					return false;
			}
		}

		return true;
	}
};