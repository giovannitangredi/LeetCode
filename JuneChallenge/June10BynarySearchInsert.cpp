class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int m=0;
        while(l<=r )
        {
             m=(l+r)/2;
            if(nums[m]==target)
                return m;
            if(nums[m]>target)
                r=m-1;
            else
                l=m+1;
        }
        
        return nums[m]>target?m:m+1;
    }
};