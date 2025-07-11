class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> map = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            if (map.find(c) == map.end()) {
                stack.push(c);
            }
            else if (!stack.empty() && map[c] == stack.top()) {
                stack.pop();
            }
            else {
                return false;
            }
        }
        return stack.empty();
    }
};