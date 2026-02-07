class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string token="";
        vector<string>ans;
        while(getline(ss, token, '/')){
            if(token=="."||token=="") continue;
            if(token!="..")
                ans.push_back(token);
            else if(!ans.empty())
                ans.pop_back();
        }
        if(ans.empty())
            return "/";
        string res = "";
        for(auto &id:ans)
        {
            res=res+"/"+id;
        }
        return res;
    }
};