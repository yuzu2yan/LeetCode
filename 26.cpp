class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();
      unordered_set<int> uniqueElements(nums.begin(), nums.end());
      int k = uniqueElements.size();
      nums.clear();
      vector<int> uniqueVector(uniqueElements.begin(), uniqueElements.end());
      sort(uniqueVector.begin(), uniqueVector.end());
      nums = uniqueVector;

      return k;
    }
};