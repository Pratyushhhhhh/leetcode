class Solution {
public:
    bool isOdd(char ch) {
        return ch % 2 == 1;
    }
   
    string largestOddNumber(string num) {
        for(int i=num.length()-1;i>=0;i--)
        {
            if(isOdd(num[i]))
                return num.substr(0,i+1);
            
        }
        return "";
    }
};