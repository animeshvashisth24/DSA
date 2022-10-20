// combination (nCr) using 2 methods
#include <bits/stdc++.h>
using namespace std;

// normal method for nCr using factorial - O(n)
int fac(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return fac(n - 1) * n;
  }
}
int nCr(int n, int r)
{
  int t1, t2, t3;
  t1 = fac(n);
  t2 = fac(r);
  t3 = fac(n - r);
  return t1 / (t2 * t3);
}

// combination using recursion based on pascal's tri formula
int recursive_nCr(int n, int r)
{
  if (n == r || r == 0)
  {
    return 1;
  }
  else
  {
    return recursive_nCr(n - 1, r - 1) + recursive_nCr(n - 1, r);
  }
}

int main()
{
  cout << "nCr using factorial = " << nCr(4, 2) << "\n";
  cout << "recursive nCr using pascal's tri = " << recursive_nCr(4, 2) << "\n";
  return 0;
}
