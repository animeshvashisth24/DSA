#include <bits/stdc++.h>
using namespace std;
int size = 10;
int length = 10;
// binary search function
int binarySearch(int arr[], int low, int high, int key)
{

  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (key == arr[mid])
    {
      return mid;
    }
    else if (key < arr[mid]) // commented approac - recursion binary search
    {
      high = mid - 1; // return binarySearch(arr, low, mid - 1, key);
    }
    else
    {
      low = mid + 1; // return binarySearch(arr, mid + 1, high, key);
    }
  }
  return -1; // not found
}

int main()
{
  int key;
  int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  // cout << "\n enter key element to search : ";
  // cin >> key;
  int low = 0;
  int high = length - 1;
  int result = binarySearch(arr, low, high, 50);
  if (result != -1)
    cout << "\nelement found at index " << result << endl;
  else
    cout << "\nelement not found" << endl;
  return 0;
}

