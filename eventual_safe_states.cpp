class Solution {
private:
    bool dfs(int node, vector<int>&vis,vector<vector<int>>& graph,vector<int>&pathVis,vector<int>&check)
    {
        vis[node]=1;
        pathVis[node]=1;
        for(auto it:graph[node])
        {
            if(!vis[it])
            {//checks it not visited
                if(dfs(it,vis,graph,pathVis,check) == true)
                {
                check[node]=0;
                return true;
                }
            }//if visited and also path visited therfore cycle exist
            else if(pathVis[it])
            {
                check[node]=0;
                return true;
            }
        }
        check[node]=1;
        pathVis[node]=0;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<int>vis(n,0);
        vector<int>pathVis(n,0);
        vector<int>check(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            dfs(i,vis,graph,pathVis,check);
        }
        for(int i=0;i<n;i++)
        {   
            if(check[i]==1) ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};