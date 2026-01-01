class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0,n=bits.size();
        while(i<n)
        {
            if(bits[i]==0)
            {   if(i==n-1) return true;
                i++;
            }
            if(bits[i]==1)i+=2;
            
        }
        return false;
    }
};