#include <iostream>
using namespace std;
int main() 
{
    int arr[5]={1,2,3,4,5};
    int temp=0;
    for(int i=0;i<=4;i++)
    {
        temp=temp+arr[i];
    }
    cout<<"sum is "<<temp;
};
