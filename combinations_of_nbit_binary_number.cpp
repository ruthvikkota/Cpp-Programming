#include <iostream>
#include <string>
using namespace std;

void bin(int n, int i, string str)
{
    if (i == n)
    {
        cout << str << endl;
        return;
    }
    int temp=i+1;
    bin(n, temp, str + "0");
    bin(n, temp, str + "1");
}

int main()
{
    int n;
    cout<<"Enter the number of bits: ";
    cin >> n;
    bin(n, 0, "");
    return 0;
}
