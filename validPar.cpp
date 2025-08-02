class Solution {
public:
    string removeOuterParentheses(string s) {
      int c1=0,c2=0,start=0;
      string w="";  
      for(int i=0;i<s.length();i++)
      {
        c2++;
        if(s[i]=='(')
            c1++;
        if(s[i]==')')
            c1--;
        if(c1==0)
        {
            w+=s.substr(start+1,c2-2);
            start+=c2;
            c2=0;
        }
      }  
      return w;
    }
};