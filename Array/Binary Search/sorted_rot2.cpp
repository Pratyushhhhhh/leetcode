class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            while(nums[low]==nums[mid] && nums[mid]==nums[high] && high>1 && low<nums.size()-2){
                low++;high--;
            }
            if(nums[mid] == target) return true;
            else if(nums[low]<=nums[mid])
            {
                if(nums[low]<=target && target<nums[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
            else
            {
                if(nums[mid]<target && target<=nums[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return false;
    }
};