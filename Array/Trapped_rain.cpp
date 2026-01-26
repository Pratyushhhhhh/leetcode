// 2 pointer soln
class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0,rmax=0,ans=0;
        int l=0,r=height.size()-1;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=lmax){  
                    lmax=height[l];
                }
                else{
                    ans+=lmax-height[l];
                }
                l++;
            }
            else{
                if(height[r]>=rmax){
                    rmax=height[r];
                }
                else{
                    ans+=rmax-height[r];
                }
                r--;
            }
        }
        return ans;
    }
};

// Precomputed arrays soln
 int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lmax(n);
        vector<int>rmax(n);
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(lmax[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            rmax[i]=max(rmax[i+1],height[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(lmax[i],rmax[i])-height[i];
        }
        return ans;
    }