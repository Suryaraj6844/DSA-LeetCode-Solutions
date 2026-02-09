class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int n = nums.size();
    int maxsum = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
      if (currsum < 0)
      {
        currsum = 0;
      }
      currsum += nums[i];
      maxsum = max(maxsum, currsum);
    }
    return maxsum;
  }
};
