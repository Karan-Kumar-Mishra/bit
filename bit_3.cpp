#include<iostream>
#include<vector>
using namespace std;
//check number is power of 2 
int pow_of_two(int n)
{
    if((n&(n-1))==0)
    {
     return 1;
    }
    else
    {
     return 0;
    }
    
}

int main()
{
    cout<<pow_of_two(128)<<endl;
    return 0;
}