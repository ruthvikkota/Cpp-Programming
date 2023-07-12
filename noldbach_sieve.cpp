/*Nick is interested in prime numbers. Once he read about It states that every even integer greater than 2 can be
expressed as the sum of two primes. That got Nick's attention and he decided to invent a problem of his own and call it Noldbach
problem. Since Nick is interested only in prime Noldbach problem states that at least k prime numbers from 2 to n inclusively
can be expressed as the sum of three integer numbers: two neighboring prime numbers and l. For example, 19 = 7 + 11 + 1, or 13 5
+7+1.
Two prime numbers are called neighboring if there are no other prime numbers between them.
You are to help Nick, and find out if he is right or wrong.
Input
The first line of the input contains two integers n (2 S n and k (0 k S 1000).
Output
Output YES if at least k prime numbers from 2 to n inclusively can be expressed as it was described above. Otherwise output NO.*/

#include <iostream>
#include <cmath>
using namespace std;
const int maxn = 10001;
int p[maxn];
void sieve() {
    p[0] = 0;
    p[1] = 0;
    for (int i = 2; i < maxn; i++) {
        p[i] = 1;
    }
    for (int i = 4; i < maxn; i += 2) {
        p[i] = 0;
    }
    for (int i = 3; i * i < maxn; i++) {
        if (p[i] == 1) {
            for (int j = i * i; j < maxn; j += i) {
                if (p[j] == 1) {
                    p[j] = 0;
                }
            }
        }
    }
}
string noldbatch(int n, int k, int c) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (p[i] == 1) {
            for (int j = i + 1; j <= n; j++) {
                if (p[j] == 1) {
                    sum = i + j + 1;
                    if (p[sum] == 1) {
                        c = c + 1;
                    }
                    if (c == k) {
                        return "YES";
                    }
                    if (sum > n) {
                        return "NO";
                    }
                    sum = 0;
                    i = j;
                }
            }
        }
    }
    return "no";
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    sieve();
    int n, k;
    cin >> n>> k;
    cout << noldbatch(n, k, 0);
    return 0;
}
