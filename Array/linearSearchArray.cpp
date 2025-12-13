//  linear search and its two optimisation versions
#include <bits/stdc++.h>
using namespace std;
int size = 10;
int length = 10;
void swap(int &a, int &b)
{
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}

void display(int arr[])
{
  for (int i = 0; i < length; i++)
  {
    cout << "arr[" << i << "] = " << arr[i] << "  ";
  }
  cout << endl;
}
// returns index of key if found
int linearSearch(int arr[], int key)
{
  for (int i = 0; i < length; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1; // key not found
}
// improving linear search using transposition
int linearSearchTranspose(int arr[], int key)
{
  for (int i = 0; i < length; i++)
  {
    if (arr[i] == key)
    {
      swap(arr[i], arr[i - 1]);
      return i - 1;
    }
  }
  return -1; // key not found
}
// improving linear search using move to head
int linearSearchMove(int arr[], int key)
{
  for (int i = 0; i < length; i++)
  {
    if (arr[i] == key)
    {
      swap(arr[i], arr[0]);
      return 0;
    }
  }
  return -1; // key not found
}
int main()
{
  int key;
  int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  cout << "\n enter key element to search : ";
  cin >> key;
  int r;
  // for basic linear search
  r = linearSearch(arr, key);
  if (r == -1)
  {
    cout << "\nkey element not found" << endl;
  }
  else
  {
    cout << "key element found at " << r << " index" << endl;
  }
  display(arr);
  // for transpositon ls
  cout << "\n enter key element to search : ";
  cin >> key;
  r = linearSearchTranspose(arr, key);
  if (r == -1)
  {
    cout << "\nkey element not found" << endl;
  }
  else
  {
    cout << "key element found at " << r << " index" << endl;
  }
  display(arr);
  // again searching
  cout << "\n enter key element to search : ";
  cin >> key;
  r = linearSearchTranspose(arr, key);
  if (r == -1)
  {
    cout << "\nkey element not found" << endl;
  }
  else
  {
    cout << "key element found at " << r << " index" << endl;
  }
  display(arr);
  // for move to head ls
  cout << "\n enter key element to search : ";
  cin >> key;
  r = linearSearchMove(arr, key);
  if (r == -1)
  {
    cout << "\nkey element not found" << endl;
  }
  else
  {
    cout << "key element found at " << r << " index" << endl;
  }
  display(arr);
  // again searching
  cout << "\n enter key element to search : ";
  cin >> key;
  r = linearSearchMove(arr, key);
  if (r == -1)
  {
    cout << "\nkey element not found" << endl;
  }
  else
  {
    cout << "key element found at " << r << " index" << endl;
  }
  display(arr);
  return 0;
}

