//  left shift array by one(loosing first element value)-- looks like scrolling
#include <bits/stdc++.h>
using namespace std;
int size = 10;
int length = 5;
void display(int arr[])
{
  for (int i = 0; i < length; i++)
  {
    cout << "arr[" << i << "] = " << arr[i] << "  ";
  }
  cout << endl;
}
int leftShiftByOne(int arr[])
{
  for (int i = 0; i < length; i++)
  {
    arr[i] = arr[i + 1];
  }
  return 0;
}

int main()
{
  int arr[10] = {2, 4, 6, 8, 10};
  cout << "\n array (before) : " << endl;
  display(arr);
  leftShiftByOne(arr);
  cout << "\n array after one left shift : " << endl;
  display(arr);
  return 0;
}

