class Solution {
public:
    bool isValid(string s) {
        std::vector<char> stack = {};
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') stack.push_back('(');
            else if (s[i] == '{') stack.push_back('{');
            else if (s[i] == '[') stack.push_back('[');
            else if (stack.empty()) return false;
            else {
                if (s[i] == ')' && stack.back() != '(') return false;
                else if (s[i] == '}' && stack.back() != '{') return false;
                else if (s[i] == ']' && stack.back() != '[') return false;
                stack.pop_back();
            }
        }
        if (!stack.empty()) return false;
        return true;
    }
};