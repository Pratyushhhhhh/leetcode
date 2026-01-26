class Solution {
public:
    bool rotateString(string s, string goal) {
        // int l1= s.length(),l2=goal.length();
        // if(l1!=l2) return false;
        // s+=s;
        // string temp="";
        // for(int i=0;i<l1;i++)
        // {
        //     temp=s.substr(i,l2);
        //     if(temp==goal)return true;
            
        // }
        // return false;
        if (s.length() != goal.length()) return false;
        s += s;
        return s.find(goal) != string::npos;
    
    }
};