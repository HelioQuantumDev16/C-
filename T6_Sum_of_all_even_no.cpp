// write a program to find the sum of all even number from 1 to n.

#include<iostream>
using namespace std;
int main()
{
  int n, sum = 0;
  cin>>n;

  int i = 2;
  while(i <= n)
  {
    sum = sum + i;
    i = i + 2;
  }
  cout<<"Sum of all Even numbers = "<<sum<<endl;
    return 0;
}