class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int m=0;
        int idx=INT_MAX;
        while(l<=r)
        {
            m=l+(r-l)/2;
            if(nums[l]<=nums[m]){ 
                idx=min(nums[l],idx);
                l=m+1;
            }
            else{
                idx=min(nums[m],idx);
                r=m-1;
            }
        }  
        return idx; 
    }
};