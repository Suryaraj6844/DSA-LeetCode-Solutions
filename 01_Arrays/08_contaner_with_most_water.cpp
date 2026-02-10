class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int n = height.size();
    int ans = 0;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
      int curr;
      curr = min(height[left], height[right]) * (right - left);
      ans = max(ans, curr);
      if (height[left] > height[right])
      {
        right--;
      }
      else
      {
        left++;
      }
    }
    return ans;
  }
};
