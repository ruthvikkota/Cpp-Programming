

#include <iostream>
#include <cstring>
using namespace std;
int arr[100000];
int fib(int n) {
  if (n<=1){
    arr[n]=n;
    return n;
  }
  arr[n]=fib(n - 1) + fib(n - 2);
  return fib(n - 1) + fib(n - 2);
}

int main() {
  memset(arr, -1, sizeof(arr));
  int n;
  cout<<"Enter the number: ";
  cin >> n;
   for (int i = 0; i < n; i++) {
        cout << fib(i) << endl;
    }
  return 0;
}
