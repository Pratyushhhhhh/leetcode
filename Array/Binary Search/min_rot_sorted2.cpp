class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int m=0;
        while(l<r){
            m=l+(r-l)/2;
            if(nums[l]>nums[m])
                r=m;
            else if(nums[r]<nums[m])
                l=m+1;
            else
                r--;
        }  
        return nums[l]; 
    }
};