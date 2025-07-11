class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n == 0) return 0;

        int length = 1, maxLength = 0;
        string substring = string(1, s[0]);

        for (int i = 1; i < n; i++) {
            char currentChar = s[i];
            if (substring.find(currentChar) == string::npos) {
                substring += currentChar;
                length++;
            } else {
                maxLength = max(maxLength, length);
                substring = substring.substr(substring.find(currentChar) + 1) + currentChar;
                length = substring.size();
            }
        }

        maxLength = max(maxLength, length);
        return maxLength;
    }
};