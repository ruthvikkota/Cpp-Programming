#include <iostream>
#include <string>
using namespace std;
void sub(int n,int i,int arr[],string str)
{
	if(n==i){
		
		
		for(int x=0;x<str.length();x++)
		{
			if(str[x]=='1')
			{
				cout<<arr[x]<<" ";
			}
			
		}
		cout<<endl;
		return ;
	}
	sub(n,i+1,arr,str+"0");
	sub(n,i+1,arr,str+"1");
}

int main()
{
  
	int arr[3]={2,3,4};
	int n;
	n=sizeof(arr)/sizeof(arr[0]);
    sub(n,0,arr,"");
    return 0;
}
