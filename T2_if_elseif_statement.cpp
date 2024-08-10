// Write a Program to check the input number is positive, negative or Zero.

#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"Enter the value of a ";
  cin>>a;

  if(a>0)
  {
    cout<<"A is Positive"<<endl;
  }
  else if(a<0)
  {
    cout<<"A is Negative"<<endl;
  }
  else
  {
    cout<<"A is Zero"<<endl;
  }
    return 0;
}