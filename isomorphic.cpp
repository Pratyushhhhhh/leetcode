class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>st;
        unordered_map<char,char>ts;
        for(int i=0;i<s.length();i++)
        {
            char ch1=s[i];
            char ch2=t[i];
            if(st.find(ch1)!=st.end() && st[ch1]!=ch2 ||ts.find(ch2)!=ts.end() && ts[ch2]!=ch1) return false;

            st[ch1]=ch2;
            ts[ch2]=ch1;
        }
        return true;
    }
};