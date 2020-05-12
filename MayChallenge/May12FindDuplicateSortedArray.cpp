class Solution {
   int  BS(vector<int> arr,int l, int r)
    {
        if(l==r)
            return arr[l];
       if(l>r)
           return -1;
       int m=(l+r)/2;
       if(m%2==0)
       {
           if(arr[m]==arr[m+1])
           {
              return BS(arr,m+2,r);
           }
           else
           {
              return BS(arr,l,m);
           }
       }
       else
       {
           if(arr[m]==arr[m-1])
           {
               return BS(arr,m+1,r);
           }
           else
           {
              return BS(arr,l,m-1);
           }
       }
       return -1;
       
    }
public:
    int singleNonDuplicate(vector<int>& nums) {
        return BS(nums,0,nums.size()-1);
    }
};