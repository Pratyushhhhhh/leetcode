class Solution {
public:
    string reverseWords(string s) {
        string w="";
        stack<string>stk;
        s+=" ";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(!w.empty())
                {
                stk.push(w);
                w="";
                }
            }
            else
                w=w+s[i];
        }
        string temp,result;
        while(!stk.empty())
        {
            temp=stk.top();
            stk.pop();
            result+=temp+" ";
        }
        if (!result.empty()) result.pop_back();
        return result;
    }
};