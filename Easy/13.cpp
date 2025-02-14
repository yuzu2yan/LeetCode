class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int prev = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            int val = 0;
            if (s[i] == 'I') val = 1;
            else if (s[i] == 'V') val = 5;
            else if (s[i] == 'X') val = 10;
            else if (s[i] == 'L') val = 50;
            else if (s[i] == 'C') val = 100;
            else if (s[i] == 'D') val = 500;
            else if (s[i] == 'M') val = 1000; 
            
            if (val < prev) sum -= val;
            else sum += val;
            prev = val;
        }
        return sum;
    }
};