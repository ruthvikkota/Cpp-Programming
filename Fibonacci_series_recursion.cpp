// the time complexity of the Fibonacci program using recursion is O(2^n)
#include <iostream>
using namespace std;

int fib(int n) {
  if (n<=1)
    return n;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  int n;
  cout<<"Enter the number: ";
  cin >> n;
   for (int i = 0; i < n; i++) {
        cout << fib(i) << endl;
    }
  return 0;
}
