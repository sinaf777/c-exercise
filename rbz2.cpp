#include<iostream>
using namespace std;

void get_info()
{
     cout<<"Enter first number";
    cin>>num1;

    cout<<"Enter second number";
    cin>>num2;
}
// return function  with args
int CompNum(int num1, int num2)
{
     int result;

    if(num1>=num2)
    {
        result =num1;
    }
    else
    {
        result =num2;
    }
    return result;
}



int main ()
{
    int num1, num2;
    get_info();


    int output = CompNum(num1, num2);

    cout<<"the largest number is:"<<output;
}
