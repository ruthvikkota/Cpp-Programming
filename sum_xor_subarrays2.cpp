//Time complexity O(n^2)
#include <iostream>
using namespace std;
int subarray(int a[], int n)
{
	int sum=0;
    for (int i = 0; i < n; i++) {
		int dif=0;
        for (int j = i; j < n; j++) {
			      dif=dif^a[j];
            sum=sum+dif;
        }
    }
	return sum;
}
int main()
{
    int a[] = {1,2,3,4};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<subarray(a, n);
    return 0;
}
