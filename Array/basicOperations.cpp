//display and add/append functions in array
#include <bits/stdc++.h>
using namespace std;

// display array elements
void display(int arr[], int length)
{
  for (int i = 0; i < length; i++)
  {
    cout << "arr[" << i << "] = " << arr[i] << "  ";
  }
  cout << endl;
}

// adding an element only at free space in the array
void append(int arr[], int &length, int x) // length is called by reference
{
  if (length < 10)
  { // arr length < arr size
    arr[length] = x;
    length = length + 1;
  }
}

int main()
{
  int arr[10] = {2, 4, 6, 8, 10};
  int length = 5;
  display(arr, length);
  append(arr, length, 12);
  display(arr, length);
  return 0;
}



