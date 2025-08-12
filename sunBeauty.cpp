class Solution {
public:
    int beautySum(string s) {
        int ans=0,n=s.size();
        for(int i=0;i<n;i++){
            map<char,int>m;
            for(int j=i;j<n;j++){
                m[s[j]]++;
                int maxF=0,minF=INT_MAX;
                for(auto it:m)
                {
                    maxF=max(maxF,it.second);
                    minF=min(minF,it.second);
                }
                ans+=(maxF-minF);
            }
            }
            return ans;
        }
    
};