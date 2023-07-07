/*
Enter the number of bits: 3
010
101
*/

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
	else 
	{
		if(str[str.length()-1]=='0')
		{
			bin(n, i+1, str + "1");
    	}
		else if(str[str.length()-1]=='1'){
			bin(n, i+1, str + "0");
		}
		else
		{
			bin(n, i+1, str + "0");
      bin(n, i+1, str + "1");
		}
    }
}

int main()
{
    int n;
    cout<<"Enter the number of bits: ";
    cin >> n;
    bin(n, 0, "");
    return 0;
}
