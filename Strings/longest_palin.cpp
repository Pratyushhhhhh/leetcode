class Solution {
//     int t[1001][1001];
// private:
//     bool solve(string s,int i,int j)
//     {
//         if(i>=j) return 1;
//         if(t[i][j]!=-1) return t[i][j];
//         if(s[i]==s[j])
//            return t[i][j]= solve(s,i+1,j-1);
//         else
//             return t[i][j]=0;
//     }
public:
    string longestPalindrome(string s) {
        int maxlen = 0;
        int sp=0;
        int l=0,r=0;
        if(s.size()<1)return s;
        for(int i=0;i<s.size();i++)
        {
            l=i;
            r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>maxlen){
                    maxlen=r-l+1;
                    sp=l;
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>maxlen){
                    maxlen=r-l+1;
                    sp=l;
                }
                l--;
                r++;
            } a b b d a d a d
        }
        return s.substr(sp,maxlen);
        // int maxlen = INT_MIN;
        // memset(t,-1,sizeof(t));
        // int sp=0;
        // int n = s.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         if(solve(s,i,j)){
        //             if(j-i+1>maxlen){
        //                 maxlen=j-i+1;
        //                 sp=i;
        //             }
        //         }
        //     }
        // }
        // return s.substr(sp,maxlen);
    }
};