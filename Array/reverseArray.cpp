//  reversing an array - both methods
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

// using auxiliary(extra) aaray B to copy from A in reverse order then from B to A
void reverseArray1(int A[])
{
  int i, j, B[10];
  for (i = length - 1, j = 0; i >= 0; i--, j++)
  {
    B[j] = A[i];
  }
  for (int i = 0; i < length; i++)
  {
    A[i] = B[i];
  }
}

// scanning from both ends and swapping elements
void reverseArray2(int arr[])
{
  int i, j;
  for (i = 0, j = length - 1; i < j; i++, j--)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main()
{
  int A[10] = {11, 22, 33, 44, 55};
  cout << "\n array (before) : " << endl;
  display(A);
  reverseArray1(A);
  cout << "\n reversed array : " << endl;
  display(A);
  // 2nd method
  int arr[10] = {1, 2, 3, 4, 5};
  cout << "\n array (before) : " << endl;
  display(arr);
  reverseArray2(arr);
  cout << "\n reversed array : " << endl;
  display(arr);
  return 0;
}

