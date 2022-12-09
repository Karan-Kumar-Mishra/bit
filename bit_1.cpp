#include<iostream>
#include<stdio.h>
using namespace std;
// get bin and set bit
int getbit(int n,int pos)
{
    return (n &(1<<pos));
}
int setbit(int n,int pos)
{
    return (n |(1<<pos));
}
int main()
{
    cout<<"get bit =>"<<getbit(5,2)<<endl;
    cout<<"set bit =>"<<setbit(5,1)<<endl;
    return 0;
}