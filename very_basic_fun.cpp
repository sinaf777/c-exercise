#include<iostream>
using namespace std;

int mx(int, int );


int main()
{
  cout<<mx(67,89);
}






int mx(int num1, int num2)
{
    int result;
    if(num1>=num2)
    {
        result =num1;
    }
    else
    {
        result = num2;
    }
  return  result;
}
