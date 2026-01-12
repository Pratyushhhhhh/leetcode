class Solution { //memoization and tabulation and space optimization
    /*
    private:
    int solve(int ind,vector<int>&dp,vector<int>h)
    {
        if(ind==0) return 0;
        if(dp[ind]!=-1)return dp[ind];
        int left=solve(ind-1,dp,h)+abs(h[ind]-h[ind-1]);
        int right=INT_MAX;
        if(ind>1)
            right=solve(ind-2,dp,h)+abs(h[ind]-h[ind-2]);
        return dp[ind]=min(left,right);
    }*/
  public:
    int minCost(vector<int>& heights) {
        // Code here
        // int n=heights.size();
        // vector<int>dp(n,0);
        // dp[0]=0;
        // for(int i=1;i<n;i++)
        // {
        //     int first=dp[i-1]+abs(heights[i]-heights[i-1]);
        //     int second=INT_MAX;
        //     if(i>1)
        //         second=dp[i-2]+abs(heights[i]-heights[i-2]);
        //     dp[i]=min(first,second);
        // }
        // //int e=solve(n-1,dp,heights);
        // return dp[n-1];
        int n=heights.size();
        int prev2=0,prev=0;
        for(int i=1;i<n;i++)
        {
            int first=prev+abs(heights[i]-heights[i-1]);
            int second=INT_MAX;
            if(i>1)
                second=prev2+abs(heights[i]-heights[i-2]);
            int curr=min(first,second);
            prev2=prev;
            prev=curr;
        }
        //int e=solve(n-1,dp,heights);
        return prev;
        
        
    }
};