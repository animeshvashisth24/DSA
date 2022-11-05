// left rotate array by one (first index value replaced at last element place)--looka like loop
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
int leftRotateByOne(int arr[])
{
  int temp = arr[0]; // storing first element value
  for (int i = 0; i < length; i++)
  {
    if (i == length - 1) // replacing first element value if it is last element index
    {
      arr[i] = temp;
    }
    else // otherwise same procedure
    {
      arr[i] = arr[i + 1];
    }
  }
  return 0;
}
int main()
{
  int arr[10] = {2, 4, 6, 8, 10};
  cout << "\n array (before) : " << endl;
  display(arr);
  leftRotateByOne(arr);
  cout << "\n array after one left shift : " << endl;
  display(arr);
  return 0;
}