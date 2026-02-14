class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    int n = s.size();
    unordered_map<char, int> m;
    int i = 0;
    int ans = 0;
    for (int j = 0; j < n; j++)
    {
      if (m.count(s[j]) && m[s[j]] >= i)
      {
        i = m[s[j]] + 1;
      }

      m[s[j]] = j;
      ans = max(ans, j - i + 1);
    }
    return ans;
  }
};
