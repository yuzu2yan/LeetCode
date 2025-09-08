class Solution {
  public:
    int myAtoi(string s) {
        if (s.empty()) return 0;
        int i = 0;
        int sign = 1;

        while (i < s.size() && s[i] == ' ') i++;
        if (i == s.size()) return 0;

        if (s[i] == '+') {
          i++;
        }
        else if (s[i] == '-') {
          i++;
          sign = -1;
        }
        
        long long res = 0;
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
          res = res * 10 + (s[i] - '0');
          if (res * sign >= INT_MAX) return INT_MAX;
          else if (res * sign <= INT_MIN) return INT_MIN;
          i++;
        }

        return static_cast<int>(res * sign);
      }
  };