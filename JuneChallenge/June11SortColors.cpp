class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0;
        for(int x :nums)
        {
            if(x==0)
                red++;
            else if(x==1)
                white++;
            else
                blue++;
        }
        nums.clear();
        nums.insert(nums.begin(),blue,2);
         nums.insert(nums.begin(),white,1);
        nums.insert(nums.begin(),red,0);
    }
};