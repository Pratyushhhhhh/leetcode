class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>arr(n+1);
        for(auto &it:mp)
        {
            int x=it.first;
            int freq= it.second;
            arr[freq].push_back(x);
        }
        vector<int>result;
        for(int i=n;i>=0;i--)
        {
            if(arr[i].size()==0) continue;
            
            while(arr[i].size()>00 && k>0)
            {
                result.push_back(arr[i].back());
                arr[i].pop_back();
                k--;
            }
        }
        return result;
    }
};