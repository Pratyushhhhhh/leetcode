class Solution {
public:
    char kthCharacter(int k) {
        string w ="a";
        string st ="";
        char ch;
        while(w.length()<=k)
        {
            st=w;
            for(int i=0;i<w.length();i++)
            {
                ch=w[i]+1;//a+1
                st=st+ch;
            }
           
            w=st;
        }
        return w[k-1];
    }
    
};