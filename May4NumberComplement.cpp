class Solution {
public:
	int findComplement(int num) {
		int bits[32] = { 0 };
		int i = 0;
		int size = 0;
		while (num)
		{
			bits[i] = num % 2;
			num /= 2;
			i++;
			size++;
		}
		int n = 0;
		for (i = 0; i < size; i++)
		{
			bits[i] = (bits[i] == 1 ? 0 : 1);
			n += pow(2, i)*bits[i];
		}
		return n;
	}
};