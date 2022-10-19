// tower of hanoi using recursion - O(2^n)
#include <bits/stdc++.h>
using namespace std;

int TOH(int n, int A, int B, int C)
{
  if (n > 0)
  {
    TOH(n - 1, A, C, B);
    cout << A << "->" << C << "\t";
    TOH(n - 1, B, A, C);
  }
  return 0;
}

int main()
{
  TOH(3, 1, 2, 3);
  return 0;
}
