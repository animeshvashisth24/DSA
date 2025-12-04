//  recursion and its types
#include <iostream>
using namespace std;
void funB(int n);

// tail recursion
void fun1(int n)
{
  if (n > 0)
  {
    cout << n << " ";
    fun1(n - 1);
  }
}

// head recursion
void fun2(int n)
{
  if (n > 0)
  {
    fun2(n - 1);
    cout << n << " ";
  }
}

// tree recursion
void fun3(int n)
{
  if (n > 0)
  {
    cout << n << " ";
    fun3(n - 1);
    fun3(n - 1);
  }
}

// indirect recursion functions funA and funB
void funA(int n)
{
  if (n > 0)
  {
    cout << n << " ";
    funB(n / 2);
  }
}
void funB(int n)
{
  if (n > 0)
  {
    cout << n << " ";
    funA(n - 2);
  }
}

// nested recursion
int fun4(int n)
{
  if (n > 100)
  {
    return n - 10;
  }
  else
  {
    return fun4(fun4(n + 11));
  }
}

int main()
{
  int a, b, c, d, e, ans;
  a = 3;
  fun1(a); // tail recursion function
  cout << "\n";
  b = 3;
  fun2(b); // head recursion function
  cout << "\n";
  c = 3;
  fun3(c); // tree recursion fn
  cout << "\n";
  d = 20;
  funA(d); // indirect recursion
  cout << "\n";
  e = 96;
  ans = fun4(e); // indirect recursion
  cout << ans << "\n";
  return 0;
}

