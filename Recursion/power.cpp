// power using recursion - 2 diff. approaches
#include <bits/stdc++.h>
using namespace std;

// normal recursive fn.
int pow(int m, int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return pow(m, n - 1) * m;
  }
}

// improved version with less no. of multiplications (optimised)
int iPow(int m, int n)
{
  if (n == 0)
  {
    return 1;
  }
  if (n % 2 == 0)
  {
    return iPow(m * m, n / 2);
  }
  else
  {
    return m * iPow(m * m, (n - 1) / 2);
  }
}

int main()
{
  int a, b;
  a = pow(4, 3);
  cout << a << "\n";
  b = iPow(4, 3);
  cout << b << "\n";
  return 0;
}
