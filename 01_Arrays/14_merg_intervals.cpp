class Solution
{
public:
  vector<vector<int>> merge(vector<vector<int>> &arr)
  {
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    pair<int, int> p1 = make_pair(arr[0][0], arr[0][1]);
    for (int i = 1; i < n; i++)
    {
      pair<int, int> p2 = make_pair(arr[i][0], arr[i][1]);
      if (p1.second >= p2.first)
      {
        p1.second = max(p1.second, p2.second);
      }
      else
      {
        ans.push_back({p1.first, p1.second});
        p1 = p2;
      }
    }
    ans.push_back({p1.first, p1.second});
    return ans;
  }
};
