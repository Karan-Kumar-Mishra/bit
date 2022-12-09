#include<iostream>
#include<vector>
using namespace std;
//clear bit and update bit
int clearbit(int n,int pos)
{
    return (n&(~(1<<pos)));
}
int updatebit(int n,int pos)
{
    int k=n&(~(1<<pos));
    return k|(1<<pos);

}
int main()
{
    cout<<clearbit(5,1)<<endl;
    cout<<updatebit(5,1)<<endl;
    return 0;
}