class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int abs_min = arr[1]-arr[0];
        vector<vector<int>>ans;
        int diff=0;
        ans.push_back({arr[0],arr[1]});
        for(int i=1;i<n-1;i++)
        {
            diff = arr[i+1]-arr[i];
            if(diff<abs_min)
            {
                abs_min=diff;
                while(!ans.empty())ans.pop_back();
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(diff ==abs_min)
                ans.push_back({arr[i],arr[i+1]});
            
        }
        return ans;
    }
};