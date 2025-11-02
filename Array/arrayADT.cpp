#include <bits/stdc++.h>
using namespace std;

// defining array as DATA
struct Array
{
  int *A; // dynamic array in heap
  int size;
  int length;
};
void display(struct Array arr)
{
  cout << "\n array elements are : " << endl;
  for (int i = 0; i < arr.length; i++)
  {
    cout << arr.A[i] << "  ";
  }
}
int main()
{
  struct Array arr;
  int n;
  cout << "\n enter size of array : ";
  cin >> arr.size;
  arr.A = new int[arr.size];
  cout << "\n enter no. of elements : ";
  cin >> n;
  cout << "\n enter array elements " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr.A[i];
  }
  arr.length = n; //assigning length
  
  display(arr); // displaying array elements
  return 0;
}

