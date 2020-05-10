class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        unordered_map<int,int> trusted;
        unordered_map<int,int> trusting;
        if(trust.size()==0 && N==1)
            return 1;
        for(int i =0;i<trust.size();i++)
        {
            trusted[trust[i][1]]++;
            trusting[trust[i][0]]++;
        }
        for(auto it=trusted.begin();it!=trusted.end();it++)
        {
            if(it->second== N-1)
            {
                if(trusting[it->first]==0)
                {
                    return it->first;
                }
            }
        }
        return -1;
    }
};