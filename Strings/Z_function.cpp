class Solution {
    vector<int> calcIdx(vector<char>s)
    {
        int l=0,r=0;
        int k=1;
        vector<int> Z(s.size(), 0);
        for(k=1;k<s.size();k++)
        {
            if(k>r)
            {
                l=r=k;
                while(r<s.size() && s[r]==s[r-l])
                    r++;
                Z[k] = r-l;
                r--;
            }
            else{
                int k1 = k-l;
                if(Z[k1] < r-k+1)
                    Z[k]=Z[k1];
                else{
                l=k;
                while(r<s.size() && s[r]==s[r-l])
                    r++;
                Z[k] = r-l;
                r--;
                }
            }
        }
        return Z;
    }
public:
    int strStr(string haystack, string needle) {
        vector<char> s;
        for(auto c:needle)
        {
            s.push_back(c);
        }
        s.push_back('$');
        for(auto j:haystack)
        {
            s.push_back(j);
        }
        
        vector<int>Z = calcIdx(s);

        for(int i= needle.size()+1 ;i<s.size();i++)
        {
            if(Z[i]==needle.size())
                return i - (needle.size() + 1);
        }
        return -1;
    }
};