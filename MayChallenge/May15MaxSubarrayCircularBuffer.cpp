class Solution {
    int kadane(vector<int>& a)
    {
        int sum=0;
        int maxk=-1e6;
        for(int x:a)
        {
            sum+=x;
            maxk= max(maxk,sum);
            if(sum<=0)
                sum=0;
        }
        return maxk;
    }
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int ans=0;
        int sum;
        if(*max_element(A.begin(),A.end())<=0)
            return kadane(A);
        int k=kadane(A);
        for(int i=0;i<A.size();i++)
        {
            ans+=A[i];
            A[i]=-A[i]; //invert array
        }
        ans+=kadane(A);
        
        return ans>k?ans:k;
    }
};