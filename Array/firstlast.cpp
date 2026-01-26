class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int low=0, n=nums.size(),high=n-1,first=-1,last=-1,mid;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(nums[mid]==target)
                {
                    first=mid;
                    high=mid-1;
                }
                else if(nums[mid]<=target)
                    low=mid+1;
                else
                    high=mid-1;
            }
            low=0,high=n-1;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                if(nums[mid]==target)
                {
                    last=mid;
                    low=mid+1;
                }
                else if(nums[mid]<=target)
                    low=mid+1;
                else
                    high=mid-1;
            }
             return {first, last}; 
        }
    };