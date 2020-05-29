class Solution {
    const int DONE =2;
    const int PROGRESS=1;
    const int NOT_VIS=0;
    bool dfs(unordered_map<int,unordered_set<int>>& edges ,vector<int>& status, int c)
    {
        if(status[c]== PROGRESS)
            return false;
        else if(status[c]== DONE)
            return true;
        status[c]=PROGRESS;
        for(int x : edges[c])
            if(!dfs(edges,status,x))
                return false;
        status[c]=DONE;
        return true;
        
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       unordered_map<int,unordered_set<int>> edges ;
        vector<int> status(numCourses,NOT_VIS);
        for(vector<int> vec : prerequisites)
            edges[vec[1]].insert(vec[0]);
        for(int i=0;i<numCourses;i++)
        {
            for(int x : edges[i])
                if(!dfs(edges,status,x))
                    return false;
        }
        return true;
    }
};