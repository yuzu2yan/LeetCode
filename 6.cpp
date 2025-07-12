class Solution {
public:
    string convert(string s, int numRows) {
      if (numRows == 1) return s;
      std::vector<std::vector<char>> rows(numRows);
      int currentRow = 0;
      bool goingDown = true;

      for (char c : s) {
        rows[currentRow].push_back(c);
        currentRow = goingDown ? currentRow + 1 : currentRow - 1;
        if (currentRow == 0 || currentRow == numRows - 1) {
          goingDown = !goingDown;
        }
      }

      string result = "";
      for (const auto& row : rows) {
        result += string(row.begin(), row.end());
      }
      return result;
    }
};