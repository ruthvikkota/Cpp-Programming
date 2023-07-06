// the time complexity of the Fibonacci program using recursion is O(n)

#include <iostream>
#include <cstring>
using namespace std;
int arr[100000];
int fib(int n) {
  if (n<=1){
    arr[n]=n;
    return n;
  }
  else//Memoization
  {
    if(arr[n]==-1)
    {
      arr[n]=fib(n - 1) + arr[n-2];
    }
    return fib(n - 1) + fib(n - 2);
  }
}

int main() {
  memset(arr, -1, sizeof(arr));
  int n;
  cout<<"Enter the number: ";
  cin >> n;
   for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
  return 0;
}
