#include<stdio.h>
#include<iostream>
using namespace std;
//find the number of one in number
int numberofones(int n)
{
  int count=0;
  while(n)
  {
   n=n&(n-1);
   count++;
  }
  return count;
}
int main()
{
  cout<<numberofones(4)<<endl;
  cout<<numberofones(5)<<endl;
  cout<<numberofones(6)<<endl;
  cout<<numberofones(7)<<endl;
  return 0;
}