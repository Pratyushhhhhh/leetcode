class Solution { //space optimization after tabulation
public:
    int climbStairs(int n) {
        int prev2=0,prev=1,curr=0;
        for(int i=1;i<=n;i++)
        {
            curr=prev+prev2;
            prev2=prev;
            prev=curr;
        }
        return prev;

    }
};