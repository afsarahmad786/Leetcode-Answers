class Solution {
public:
   int lengthOfLongestSubstring(string s) {
      int ans = 0, i = 0;
      vector<int> mapping(256, -1);
      for (int j = 0; j < s.length(); j++) {
        if (mapping[s[j]] >= i) {
          i = mapping[s[j]] + 1;
        }
        mapping[s[j]] = j;
        ans = ans > (j - i + 1) ?  ans : (j - i + 1);
      }
      return ans;
    }
};