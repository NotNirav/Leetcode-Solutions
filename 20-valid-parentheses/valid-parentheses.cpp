class Solution {
public:
    bool isValid(string s) {
        stack<char> b;
        for(int a = 0;a<s.length();a++){
            if(s[a]=='(' || s[a] == '[' || s[a] == '{'){
                b.push(s[a]);
            }
else {
            if (b.empty()) return false;

            if ((s[a] == ')' && b.top() == '(') ||
                (s[a] == ']' && b.top() == '[') ||
                (s[a] == '}' && b.top() == '{')) {
                b.pop();
            } else {
                return false;
            }
        }
    }

    return b.empty();
}  
};