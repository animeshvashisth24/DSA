//  array declarations and initialisations
#include <bits/stdc++.h>
using namespace std;

int A[5];                     // only declaration
int B[5] = {2, 4, 6, 8, 10};  // dec. + initi.
int C[5] = {2, 4};            // rest elements get initialised with 0
int C1[5] = {0};              // it initilises first element and then rest gets initialised automa. with 0
int D[] = {1, 2, 3, 4, 5, 6}; // autmatically takes size acc. to no. of elements initilised ,i.e. size - 6

int main()
{
  // ways for accessing array elements
  cout << B[2] << endl;
  cout << 2 [B] << endl;
  cout << *(B + 2) << endl;

  // traversing array
  for (int i = 0; i < 5; i++)
  {
    cout << B[i] << " ";
  }
  cout << "\n";
  
  // printing address of elements of array
  for (int i = 0; i < 5; i++)
  {
    printf("%u ", &B[i]);
  }
  return 0;
}



