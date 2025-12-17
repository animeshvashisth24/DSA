// get,set,max,min,sum(2 approach),avg functions on array
#include <bits/stdc++.h>
using namespace std;
int size = 10;
int length = 10;

void display(int arr[])
{
  for (int i = 0; i < length; i++)
  {
    cout << "arr[" << i << "] = " << arr[i] << "  ";
  }
  // cout << endl;
}

// getter
int Get(int arr[], int index)
{
  if (index >= 0 && index < length)
  {
    return arr[index];
  }
  return -1; // index incorrect
}

// setter
int Set(int arr[], int index, int x)
{
  if (index >= 0 && index < length)
  {
    arr[index] = x;
    return x;
  }
  return -1;
}

// max func
int Max(int arr[])
{
  int maxx = arr[0];
  for (int i = 1; i < length; i++)
  {
    if (arr[i] > maxx)
    {
      maxx = arr[i];
    }
  }
  return maxx;
}

// min func
int Min(int arr[])
{
  int minn = arr[0];
  for (int i = 1; i < length; i++)
  {
    if (arr[i] < minn)
    {
      minn = arr[i];
    }
  }
  return minn;
}

// sum func - iterative
int sum(int arr[])
{
  int total = 0;
  for (int i = 0; i < length; i++)
  {
    total = total + arr[i];
  }
  return total;
}

// sum func - recursive
int rSum(int arr[], int n)
{
  if (n < 0)
    return 0;
  else
  {
    return rSum(arr, n - 1) + arr[n];
  }
}

// avg func
float avg(int arr[])
{
  int total = 0;
  for (int i = 0; i < length; i++)
  {
    total = total + arr[i];
  }
  return (float)total / length;
}

int main()
{
  int arr[10] = {10, 20, 30, 40, 55, 60, 70, 80, 90, 100};
  // get fun
  cout << "\n element at index 4 is : " << Get(arr, 4) << endl; // get fun
  cout << "\n\n";
  // set fun
  display(arr);
  cout << "\n now, new element a t index 4 is : " << Set(arr, 4, 50) << endl; // set fun
  display(arr);
  cout << "\n\n";
  // max fun
  cout << "max element in array is : " << Max(arr) << endl;
  cout << "\n\n";
  // min fun
  cout << "min element in array is : " << Min(arr) << endl;
  cout << "\n\n";
  // sum fun
  cout << "total sum of array elememts is : " << sum(arr) << endl;
  cout << "\n\n";
  // recursive sum fun
  cout << "total rSum of array elememts is : " << rSum(arr, length - 1) << endl;
  cout << "\n\n";
  // avg fun
  cout << "average of array is : " << avg(arr) << endl;
  cout << "\n\n";
  return 0;
}




