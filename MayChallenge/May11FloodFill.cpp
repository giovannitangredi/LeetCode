class Solution {
    int color;
    vector<vector<int>> grid;
    void rec( int i, int j, int newColor)
    {
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()|| grid[i][j]!=color)
            return;
        grid[i][j]=newColor;
        rec(i-1,j,newColor);
        rec(i,j-1,newColor);
        rec(i+1,j,newColor);
        rec(i,j+1,newColor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         color=image[sr][sc];
        if(color==newColor)
            return image;
        grid=image;
        rec(sr,sc,newColor);
        return grid;
    }
};