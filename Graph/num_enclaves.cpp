class Solution {      
  private: void dfs(vector<vector<int>>& grid,vector<vector<int>>&vis , int r,int c ,int drow[],int dcol[])
    {   
        vis[r][c]=1;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<4;i++)
        {   
            int nrow=r+drow[i];
            int ncol=c+dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
            {
                dfs(grid,vis,nrow,ncol,drow,dcol);
            }
        }

    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        for(int j=0;j<m;j++)
        {
            if(!vis[0][j] && grid[0][j]==1)
            {   
                dfs(grid,vis,0,j,drow,dcol);
            }
            if(!vis[n-1][j] && grid[n-1][j]==1){
                
                dfs(grid,vis,n-1,j,drow,dcol);
            }
        }  

        for(int i=0;i<n;i++)
        {
            if(!vis[i][0] && grid[i][0]==1)
            {
                dfs(grid,vis,i,0,drow,dcol);
            }
            if(!vis[i][m-1] && grid[i][m-1]==1)
            {
                dfs(grid,vis,i,m-1,drow,dcol);
            }
        }  
        int counter=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            { 
                if(grid[i][j]==1 && vis[i][j]==0)
                    counter++;
            }
        } 
    return counter;
    }
};