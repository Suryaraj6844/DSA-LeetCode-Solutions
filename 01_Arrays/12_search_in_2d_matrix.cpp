class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &arr, int key)
  {
    int n = arr.size(), m = arr[0].size();
    int srow = 0, erow = n - 1, scol = 0, ecol = m - 1;
    while (srow <= erow)
    {
      int rmid = srow + (erow - srow) / 2;
      if (key >= arr[rmid][0] && key <= arr[rmid][ecol])
      {
        while (scol <= ecol)
        {
          int cmid = scol + (ecol - scol) / 2;
          if (arr[rmid][cmid] == key)
          {
            return true;
          }
          else if (arr[rmid][cmid] < key)
          {
            scol = cmid + 1;
          }
          else
          {
            ecol = cmid - 1;
          }
        }
      }
      else if (key < arr[rmid][0] && key < arr[rmid][ecol])
      {
        erow = rmid - 1;
      }
      else
      {
        srow = rmid + 1;
      }
    }
    return false;
  }
};
