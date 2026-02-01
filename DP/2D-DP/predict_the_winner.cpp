class Solution {
    
    int t[23][23];
    int calcScore(vector<int>&nums, int start, int end)
    {
        if (start > end) return 0;
        if(start==end) return nums[start];
        if(t[start][end]!=-1) return t[start][end];
        int cs = nums[start] - calcScore(nums,start+1,end);
        int ce = nums[end] - calcScore(nums,start,end-1);
        return t[start][end]=max(cs,ce);
    }
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        memset(t, -1, sizeof(t));
        if(calcScore(nums,0,n-1)>=0) return true;
        return false;
        
    }
};