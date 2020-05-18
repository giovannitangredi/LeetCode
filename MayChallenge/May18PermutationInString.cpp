class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> counts(26);
        //using a sliding window
        int l=0,r=0;
        int count=0;
        for(char c: s1)
            counts[c-'a']++;
        
        while(r<s2.size())
        {
            if(counts[s2[r++]-'a']-->0)
                count++;
            if(count==s1.size())
                return true;
            if(r-l==s1.size() && counts[s2[l++]-'a']++>=0)
            {
                count--;
            }
        }
        return false;
    }
};