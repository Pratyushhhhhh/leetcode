class Solution {

private:
    bool isPair(char last, char x) {
        return (last == '(' && x == ')') ||
               (last == '{' && x == '}') ||
               (last == '[' && x == ']');
    }
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char x : s) {
            if (!stk.empty()) {
                char last = stk.top();
                if (isPair(last, x)) {
                    stk.pop();
                    continue;
                }
            }
            stk.push(x);
        }

        return stk.empty();
    }        
};