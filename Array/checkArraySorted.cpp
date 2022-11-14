// check whether array is sorted in ascending order or not
#include <bits/stdc++.h>
using namespace std;
int size = 10;
int length = 6;

bool checkSorted(int arr[])
{
  for (int i = 0; i < length - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int arr[size] = {2, 4, 6, 8, 10, 12};
  if (checkSorted(arr) == 1)
  {
    cout << "array is sorted" << endl;
  }
  else
  {
    cout << "array is not sorted" << endl;
  }
  return 0;
}