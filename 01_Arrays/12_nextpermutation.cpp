class Solution
{
public:
  void nextPermutation(vector<int> &nums)
  {
    int n = nums.size();
    int pivot = -1;
    for (int i = n - 2; i >= 0; i--)
    {
      if (nums[i] < nums[i + 1])
      {
        pivot = i;
        break;
      }
    }

    if (pivot != -1)
    {
      int right = n - 1;
      if (nums[pivot] >= nums[right])
      {
        while (right > pivot)
        {
          if (nums[pivot] < nums[right])
          {
            break;
          }
          right--;
        }
      }

      swap(nums[pivot], nums[right]);
      reverse(nums.begin() + pivot + 1, nums.end());
    }
    if (pivot == -1)
      reverse(nums.begin(), nums.end());
    return;
  }
};
