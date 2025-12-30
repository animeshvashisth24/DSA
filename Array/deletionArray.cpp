// deletion from an index(not leaving empty spaces in array)
#include <bits/stdc++.h>
using namespace std;
int size = 10;
int length = 6;

int deletion(int arr[], int index)
{
  if (index >= 0 && index < length)
  {
    int x = arr[index];
    for (int i = index; i < length - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    length--;
    return x;
  }
  return -1;
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
  int arr[size] = {2, 4, 6, 88, 8, 10};
  display(arr);
  cout << "deleted element is : " << deletion(arr, 3) << endl;
  display(arr);
  return 0;
}


