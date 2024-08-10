/*
  Program to print whether a given character is an Uppercase or a lowercase character or a digit or any other character.
*/
#include <iostream>
using namespace std;
int main()
{
  char ch;
  cout << "Enter a character ";
  cin >> ch;

  if (ch >= 65 && ch <= 91)
  {
    cout << "You entered an Upper case Character" << endl;
  }
  else if (ch >= 97 && ch <= 123)
  {
    cout << "You entered an  Lower case character" << endl;
  }
  else if (ch >= 48 && ch <= 56)
  {
    cout << "You entered digit" << endl;
  }
  else
  {
    cout<<"You entered a special character"<<endl;
  }
  return 0;
}