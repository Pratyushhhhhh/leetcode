class Solution {
    private: void dfs(int row,int col,int drow[],int dcol[],vector<vector<int>>&ans,vector<vector<int>>& image,int color,int ini)
    {
        ans[row][col]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++)
        {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==ini && ans[nrow][ncol]!=color)
            {
                dfs(nrow,ncol,drow,dcol,ans,image,color,ini);
            }

        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ini=image[sr][sc];
        vector<vector<int>>ans=image;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        dfs(sr,sc,delrow,delcol,ans,image,color,ini);
        return ans;
    }
};