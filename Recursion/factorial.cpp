// factorial using recursion
#include <bits/stdc++.h>
using namespace std;
// recursive factorial func.
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
int main()
{
  int a = fac(3);
  cout << a << "\n";
  return 0;
}
