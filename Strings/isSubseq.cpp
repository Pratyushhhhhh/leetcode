//leetcode 392. Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.length() && j<t.length())
        {
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        if(i==s.length()) return true;
        return false;
        // if(t.length()==0)
        // {   
        //     if(s.length()==0)return true;
        //     return false;
        // }
        // int sl=0,sr=s.length()-1;
        // int tl=0,tr=t.length()-1;
        // for(int i=0;i<t.length();i++){
            
        //     if(sl>sr) return true;
        //     if(tl>tr) return false;
        //     if(s[sl]==t[tl]){
        //         sl++;
        //         tl++;
        //     }
        //     else
        //         tl++;

        //     if(s[sr]==t[tr]){
        //         sr--;
        //         tr--;
        //     }
        //     else
        //         tr--;
            
            
        // }
        // if(tl>tr) return false;
        // return true;
    }
};