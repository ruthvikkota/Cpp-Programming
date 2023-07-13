#include <iostream>
using namespace std;
int subarray(int a[], int n)
{
	int sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
			int dif=0;
            for (int k = i; k <= j; k++) {
				if(dif==0){
					dif=a[k];
				}
				else{
					dif=dif^a[k];
				}
            }
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
