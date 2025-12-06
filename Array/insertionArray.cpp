//  insertion in array at a given index(replacing an element with another)
#include <bits/stdc++.h>
using namespace std;
int size = 10; // making size and length public(global) so that they are not required to pass to every function as parameter
int length = 5;

void insert(int arr[], int index, int x)
{
  if (index >= 0 && index <= length)
  {
    for (int i = length; i > index; i--)
    {
      arr[i] = arr[i - 1];
    }
    arr[index] = x;
    length++;
  }
}
void display(int arr[])
{
  for (int i = 0; i < length; i++)
  {
    cout << "arr[" << i << "] = " << arr[i] << "  ";
  }
  cout << endl;
}

int main()
{
  int arr[size] = {2, 4, 6, 8, 10};
  display(arr);
  insert(arr, 3, 88);
  display(arr);
  return 0;
}

