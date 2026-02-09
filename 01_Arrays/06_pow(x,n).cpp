class Solution
{
public:
  double myPow(double x, int n)
  {
    long long pow = n;
    double ans = 1;
    if (n < 0)
    {
      pow = -pow;
      x = 1 / x;
    }

    while (pow > 0)
    {
      if (pow % 2 != 0)
      {
        ans *= x;
      }
      x *= x;
      pow /= 2;
    }
    return ans;
  }
};
