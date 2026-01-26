class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);

        for(char &c:s)
            count[c-'a']++;
        
        for(char &c:t)
            count[c-'a']--;
        
        bool zeros=all_of(begin(count),end(count),[](int element){}
            return element==0;
        });
        return zeros;
    }
};