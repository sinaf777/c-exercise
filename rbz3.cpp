#include<iostream>
using namespace std;
#include<cmath>
#include<string>
int num1 =10, num2;//global var
int set_info(int, int);
int main ()
{
    //built in function example
    int x = 5;
    int y = 2;

    cout<<abs(x)<<endl;
    cout<<pow(x,y)<<endl;
    cout<<cos(x)<<endl;

    int x, y;
    string fname;
    cout<<"Enter number1";
    cin>>num1;
    cout<<"Enter number1";
    cin>>num2;

    cout<<set_info(x, y);
}

int set_info(int num1, int num2)

{
    int result;

    if(num1>=num2)
    {
        result =::num1; //using global by scope resolution
    }
    else
    {
        result = num2;
    }
    return result;
}
