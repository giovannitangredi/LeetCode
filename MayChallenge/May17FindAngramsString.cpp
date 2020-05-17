class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> vocabulary(26,0);
        for(char c: p)
            vocabulary[c-'a']++;
        int m=p.size();
        int n=s.size();
        int left=0,right=0,count=m;
        if(m>n ||m==0)
            return {};
       while(right<n)
       {
           if(vocabulary[s[right++]-'a']-->=1)
           {
               count--;
              
           }
           if(count==0)
           {
               ans.push_back(left);
           }
           if(right-left == m && vocabulary[s[left++]-'a']++>=0)
           {
               
               count++;
           }
       }
        return ans;
    }
};