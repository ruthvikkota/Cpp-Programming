#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cin >> a;

    int* p = new int[a+1];
    for(int i = 0; i < a+1; i++) {
        p[i] = 0;
    }

    for(int j = 2; j * j <= a; j++) {
        if(p[j] == 0) {
            for(int k = j * j; k < a+1; k += j) {
                p[k] = 1;
            }
        }
    }
    int i = 2;
    while (a!=0)
     {
        if(a % i == 0 && p[i] == 0) 
        {
            cout<<i<<endl;
            a = a / i;
        }
        else
        {
            i=i+1;
        }
    }

    
    delete[] p;
    return 0;
}
