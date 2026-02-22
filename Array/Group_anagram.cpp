class Solution {
private:
    string find_word(string temp)
    {  int arr[26]={0};
        for(char &ch: temp){
            arr[ch-'a']++;
        }
        string word="";
        for(int i=0;i<26;i++)
        {  
            int freq = arr[i];
            if(freq>0){
                word += string(freq,i+'a');
            }
        }
        return word;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;

        for(int i=0;i<n;i++){
            string temp = strs[i];
            // sort(temp.begin(), temp.end());
            string newWord = find_word(temp);
            mp[newWord].push_back(strs[i]);
        }

        for(auto &it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};