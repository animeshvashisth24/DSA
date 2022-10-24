// dynamic array(array in heap memory) and its size increase or decrease
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int *dynamicArr;         // array creation using pointer
  dynamicArr = new int[5]; // new operation allocates memory in heap
  dynamicArr[0] = 2;
  for (int i = 1; i < 5; i++)
  {
    dynamicArr[i] = dynamicArr[i - 1] + 2;
  }
  cout << "array elements are : "
       << "\n";
  for (int j = 0; j < 5; j++)
  {
    cout << dynamicArr[j] << "\n";
  }

  // increase array size(only possible with array in heap mem)
  int *p = new int[5];
  int *q = new int[10]; // array of required larger size
  for (int i = 0; i < 5; i++)
  {
    cout << "p[" << i << "] = ";
    cin >> p[i];
  }
  // display p elements before updation
  cout << "--> p elements before increasing size - " << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << "p[" << i << "] = " << *(p + i) << "\t"; // or p[i]
  }
  for (int i = 0; i < 5; i++)
  {
    q[i] = p[i]; // copying elements of p to q
  }
  delete[] p; // freeing memeory taken by p
  p = q;      // now p is pointing where q was pointing
  q = NULL;   // now q not pointing anywhere,p is the new array
  p[5] = 6;
  p[6] = 7;
  p[7] = 8;
  // display p elements after incresing size
  cout << "\n --> p elements after increasing size - " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "p[" << i << "] = " << *(p + i) << "\t"; // or p[i]
  }
  return 0;
}