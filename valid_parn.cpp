class Solution {
public:
    bool checkValidString(string s) {
        int min=0,mx=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                min++;
                mx++;
            }
            else if(s[i]==')')
            {
                if(min>0)min--;
                mx--;
            }
            else
            {
                min=max(min-1,0);
                mx+=1;
                
            }
            if(mx<0)return false;
        }
        if(min==0) return true;
        return false;
    }
};