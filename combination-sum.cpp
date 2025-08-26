#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void fnxcomb(int ind,vector<int>& a, int target, vector<int>ds, vector<vector<int>>&ans)
    {
        if(ind==a.size())
        {
            if(target==0){
                ans.push_back(ds);
            }
             return;
        }

        if(a[ind]<=target){
            ds.push_back(a[ind]);
            fnxcomb(ind,a,target-a[ind],ds,ans);
            ds.pop_back();
        }

        fnxcomb(ind+1,a,target,ds,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        fnxcomb(0,candidates,target,ds,ans);
        return ans;
    }
};

int main(){
    Solution obj;
    vector<int> candidates={2,3,6,7};
    int target=7;
    vector<vector<int>> ans=obj.combinationSum(candidates,target);
    for(auto i:ans){
        for(auto j:i)cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}