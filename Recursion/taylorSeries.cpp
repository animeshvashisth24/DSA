// implementing taylor series i.e. e^x using recursion - 2 diff. approaches
#include <bits/stdc++.h>
using namespace std;

// first method  - using basic recursion
double e(int x, int n)
{
  static double p = 1, f = 1;
  double result;
  if (n == 0)
  {
    return 1;
  }
  else
  {
    result = e(x, n - 1);
    p = p * x;
    f = f * n;
    return result + p / f;
  }
}

// horner's rule method- less multiplications
double E(int x, int n)
{
  static double s;
  if (n == 0)
  {
    return s;
  }
  else
  {
    s = 1 + s * x / n; // (x/n) needs typecasting as both will give int division so first multiply num with s to get write ans.
    return E(x, n - 1);
  }
}
int main()
{
  double k = e(3, 20);
  cout << k << "\n";
  double t = E(3, 20);
  cout << t << "\n";
  return 0;
}
