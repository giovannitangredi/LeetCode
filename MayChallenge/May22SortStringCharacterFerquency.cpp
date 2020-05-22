class Solution {
public:
    string frequencySort(string s) {
        //unordered_map<char,int> map1; using map was too slow
        vector<pair<char,int>> table(256);
        string str;
       for(char c:s)
       {
          // map1[c]++;
           table[(int)c].first=c;
           table[c].second++;
       } 
        sort(table.begin(),table.end(),[](pair<char,int> a,pair<char,int> b){
            if(a.second==b.second)
                return a.first>b.first;
            return a.second>b.second;
        });
        for(int i=0;i<256;i++)
        {
            if(table[i].second!=0)
                str.append(table[i].second,table[i].first);
        }
       /* sort(s.begin(),s.end(),[&,map](char a,char b){
             if(map.find(a)->second==map.find(b)->second)
        {
            return a>b;
        }
        return map.find(a)->second>map.find(b)->second;
        });*/
        return str;
    }
};