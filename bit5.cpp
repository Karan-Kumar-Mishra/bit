#include<stdio.h>
#include<iostream>
using namespace std;
//find subset by bitwise opertor
int subset(int arr[],int n)
{
    for(int i=0; i<(1<<n); i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i& (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int arr[]= {1,2,3};
    subset(arr,3);
    return 0;
}