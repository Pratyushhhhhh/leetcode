class Solution {
    int robber(vector<int>nums)
    {
        int n=nums.size();
        int prev2=0,prev=nums[0];
        for(int i=1;i<n;i++)
        {
            int take=nums[i];
            if(i>1) take+=prev2;
            int notake=0+prev;
            int curr=max(take,notake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
public:
    int rob(vector<int>& nums) {
        vector<int> t1,t2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0) t1.push_back(nums[i]);
            if(i!=nums.size()-1) t2.push_back(nums[i]);
        }
        return max(robber(t1),robber(t2));
    }
};