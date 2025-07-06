class Solution {

private:
    void _dfs(int start,vector<int> adjLs[],vector<int>&vis)
    {
        vis[start]=1;
        for(auto it:adjLs[start])
        { if(!vis[it])
                _dfs(it,adjLs,vis);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int>adjLs[V];
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(isConnected[i][j]==1 && i!=j )
                {
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        vector<int>vis(V,0);
        int count=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                count++;
                _dfs(i,adjLs,vis);
            }
        }
        return count;
    }
};