class Solution {
    static bool myC(vector<int> a,vector<int> b)
    {
        long a2,b2;
        a2= a[0]*a[0]+ a[1]*a[1];
        b2= b[0]*b[0]+ b[1]*b[1];
        return a2<b2;
        
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> ans;
        sort(points.begin(),points.end(),myC);
        for(int i=0;i<K;i++)
            ans.push_back(points[i]);
        return ans;
    }
};