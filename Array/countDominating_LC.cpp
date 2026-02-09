class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n =nums.size();
        int sum=nums[n-1];
        int len=1,dom=0;
        for(int i=n-2;i>=0;i--)
        {
            int x= nums[i];
            if(x>(sum/len))
                dom++;
            sum+=x;
            len++;
        }
        return dom;
    }
};