#include<iostream>
using namespace std;
int flag=0;
int subset[1001][1001];
bool rec(int arr[],int sum,int index,int n)
{
    
    if(sum<0)
    {
    	return false;
	}
	cout<<"["<<sum<<","<<index<<"]"<<endl;
	if(subset[sum][index]!=-1)
    	return subset[sum][index];
    if(index==n)
    {
        if(sum==0)
            return true;
        else
            return false;
    }

    bool left=rec(arr,sum-arr[index],index+1,n);
    bool right=rec(arr,sum,index+1,n);
    subset[sum][index]= left||right;
    return left||right;
}
int main()
{
    for(int i=0;i<1001;i++)
	{
		for(int j=0;j<1001;j++)
		{
			subset[i][j]=-1;
		}
	}
	int n,target;
	cout<<"enter the size of the array\n";
	cin>>n;
	int a[n];
	cout<<"enter array\n";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"\nenter target\n";
	cin>>target;
    cout<<rec(a,target,0,n);
}
