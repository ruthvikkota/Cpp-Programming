//Prime numbers
#include <iostream>
using namespace std;
int main()
{
    int test, a, i, c = 0;
    cin >> test;
    for (i = 0; i < test; i++)
    {
        cin >> a;
        if (a > 1)
        {
            for (i = 2; (i * i) <= a; i++)
            {
                if (a % i == 0)
                {
                    c = c + 1;
                }
            }
            if (c < 1)
            {
                cout << "Prime" << endl;
            }
            else
            {
                cout << "Not Prime" << endl;
            }
        }
        else
        {
            cout << "Not Prime or composite" << endl;
        }
    }
    return 0;
}
