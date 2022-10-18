// fibonacci series - 3  different methods
#include <bits/stdc++.h>
using namespace std;
int fiboArr[10];  // global arr or static arr for memo (retaining values)

// iterative method - O(n)
int iFibo(int n)
{
  int i, sum = 0, t0 = 0, t1 = 1;
  if (n <= 1)
  {
    return n;
  }
  else
  {
    for (i = 2; i <= n; i++)
    {
      sum = t0 + t1;
      t0 = t1;
      t1 = sum;
    }
  }
  return sum;
}

// recursive fun - O(2^n)
int rFibo(int n)
{
  if (n <= 1)
  {
    return n;
  }
  else
  {
    return rFibo(n - 2) + rFibo(n - 1);
  }
}

// improved recursive fn with memoizaton - O(n)
int mFibo(int n)
{
  if (n <= 1)
  {
    fiboArr[n] = n;
    return n;
  }
  else
  {
    if (fiboArr[n - 2] == -1)
    {
      fiboArr[n - 2] = mFibo(n - 2);
    }
    if (fiboArr[n - 1] == -1)
    {
      fiboArr[n - 1] = mFibo(n - 1);
    }
    fiboArr[n] = fiboArr[n - 2] + fiboArr[n - 1];
    return fiboArr[n];
  }
}

int main()
{
  for (int i = 0; i <= 10; i++)
  {
    fiboArr[i] = -1;
  }
  cout << "iterativeFiboResult = " << iFibo(7) << "\n";
  cout << "recursiveFiboResult = " << rFibo(7) << "\n";
  cout << "memoRecursiveFiboResult = " << mFibo(7) << "\n";
  return 0;
}
