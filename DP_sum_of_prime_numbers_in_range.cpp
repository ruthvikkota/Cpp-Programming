#include<iostream>
#include<cmath>
using namespace std;
const int maxn=10001;
int prime[maxn];
int sum[maxn];
void sieve()
{
    for(int i=0;i<maxn;i++)
    {
        prime[i]=0;
        sum[i]=0;
    }
    sum[0]=0; sum[1]=0;
    int temp=0;
    for(int j=2;j*j<maxn;j++)
    {
        if(prime[j]==0)
        {
            for(int k=j*j;k<maxn;k=k+j)
            {
                prime[k]=1;
            }
        }
    }
    for(int i=2;i<maxn;i++)
    {
        if(prime[i]==0)
        {
            temp=temp+i;
        }
        sum[i]=temp;
    }
}
int main()
{
    sieve();
    int left,right;
    cout<<"Left limit: ";
    cin>>left;
    cout<<"Right limit: ";
    cin>>right;
    cout<<"Sum="<<sum[right]-sum[left-1];
    return 0;
}
