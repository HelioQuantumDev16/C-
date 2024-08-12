//Program to print sum of n numbers.

#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin>>n;

    int i = 1;
    while(i <= n)
    {
      sum = sum + i;
      i++;
    }

    cout<<"Sum = "<<sum<<endl;
    return 0;
}