class Solution {
    private:

    void fnxcomb(int ind,vector<int>& a, int target,vector<int>ds,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind;i<a.size();i++)
        {
            if(i>ind && a[i]==a[i-1]) continue;
            if(a[i]>target) break;
            ds.push_back(a[i]);
            fnxcomb(i+1,a,target-a[i],ds,ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        fnxcomb(0,candidates,target,ds,ans);
        return ans;
    }
};
