#include<iostream>

using namespace std;

//void function without argument/ parameter/function with out return
void student_info();

int main()
{

student_info();

student_info();
}


void student_info()
{
    string name;
    cout<<"Enter your name";
    cin>>name;

    string dept;
    cout<<"Enter your dept";
    cin>>dept;

    int age;
    cout<<"Enter your age";
    cin>>age;

    cout<<" your name is:"<<name<<endl;
    cout<<" your dept is:"<<dept<<endl;
    cout<<" your age:"<<age<<endl;
}



