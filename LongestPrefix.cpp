class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str1,str2; 
        if(strs.size()==1) 
            return strs[0];
        str1=strs[0];
        int minLen=0,c=0,seq=str1.length();
        for(int i=1;i<strs.size();i++)
        {  
            str2=strs[i];
            minLen=min(str1.length(),str2.length());
            c=0;
            for(int j=0;j<minLen;j++)
            {
                if(str1[j]==str2[j]) c++;
                else break;
            }
            if(c==0)
                return "";
            seq=min(seq,c);
        }
        return str1.substr(0,seq);
    }
};