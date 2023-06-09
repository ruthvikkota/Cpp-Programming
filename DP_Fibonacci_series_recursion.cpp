// the time complexity of the Fibonacci program using recursion is O(n)
//using global array
#include <iostream>
#include <cstring>
using namespace std;
//Memoization
int arr[100000];
int fib(int n) {
  if(arr[n]!=-1){
    return arr[n];
  }
  if (n<=1){
    arr[n]=n;
    return n;
  }
  else
  {
    if(arr[n]==-1)
    {
      arr[n]=fib(n-1) + fib(n-2);
    }
    return fib(n-1) + fib(n-2);
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
