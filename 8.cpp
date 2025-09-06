class Solution {
  public:
    int myAtoi(string s) {
        string ans = "";
        int sign = 1;
        bool isNumber = false;
        bool leadingZero = true;
        for (int i = 0; i < s.size(); i++) {
          if (s[i] == ' ' && !isNumber) continue;
          else if (s[i] == '-' && !isNumber) {
            sign = -1;
            isNumber = true;
          }
          else if (s[i] == '+' && !isNumber) {
            sign = 1;
            isNumber = true;
          }
          else if (s[i] >= '0' && s[i] <= '9') {
            isNumber = true;
            if (s[i] == '0' && leadingZero) continue;
            leadingZero = false;
            ans += s[i];
          }
          else break;
        }
        if (ans == "") return 0;
        if (ans.size() > 10) {
          if (sign == 1) return INT_MAX;
          else return INT_MIN;
        }
        long long result = stoll(ans) * sign;
        if (result > INT_MAX) return INT_MAX;
        else if (result < INT_MIN) return INT_MIN;
        else return (int)result;
      }
  };