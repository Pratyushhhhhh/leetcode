class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true, dec = true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]) inc=false;
            if(nums[i]<nums[i+1]) dec=false;
        }
        return inc || dec;
        // int n = nums.size();
        // int k=0,q=0;
        // if(n<2) return true;
        // while(k<n-1 && nums[k]<=nums[k+1] )
        // {
        //     k++;
        // }
        // if(k == n-1) return true;
        // while(q<n-1 && nums[q]>=nums[q+1] )
        // {
        //     q++;
        // }
        // if(q == n-1) return true;
        // return false;
    }
};