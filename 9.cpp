class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) return false;
        }
        return true;
    }
};