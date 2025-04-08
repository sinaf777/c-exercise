/*#include <iostream>
using namespace std;
void hello(string name){
	cout<<name<<endl;
}
void fun1(){
	cout<<"yes"<<endl;
}
int func2(int x, int y){
	fun1();
	cout<< x + y;
	return 0;
}
int subm( int x,int y){
	cout<< x - y<<endl;
	return 0;
}
int main(){
	string name;
	getline(cin, name);
	hello(name);
	return 0;
}*/

// function overload => allows multiple functions to have the same name and different parameter

/*#include <iostream>
using namespace std;
int sum (int x, int y){
	return x + y;
}
double sum (double x, double y){
	return x + y;
}
int main(){
	cout<<sum(2,3)<<endl; // calls the int version
	cout<<sum(2.2,3.2)<<endl; // calls the double version
	return 0;
}*/

// default parameter => allows to assign default values to parameters

/*#include <iostream>
using namespace std;
void greet(string name = "sinaf", int age = 20){
	for (int i = 0; i < 5; i++){ // i used for loop for printing 5x syntax = for(statement 1; statement 2;...){}
		cout<<name<<age<<endl;
	}
}
int main(){
	greet();
	return 0;
}*/

//recurtion => a technique of making function call it self

/* #include <iostream>
using namespace std;
int sum(int x){
	if (x > 0){
	return x + sum(x - 1);		
	} else {
		return 0;
	}
}
int main(){
	int x;
	cin>>x;
	cout<<sum(x);
	return 0;
}*/

//array accessing and for loop 
/*#include <iostream>
using namespace std;
int main(){
	int temp_size = 5;
	int temp[temp_size] = {};
	cout<<"Enter initial value";
	cin>>temp[0];
	for (int i = 1; i < temp_size; i++){
		temp[i]= temp[i-1]+5;
	cout<< i <<" "<< temp[i]<<endl;
	}
	return 0;
}*/

//array addition
#include <iostream>
using namespace std;
int main(){
	int temp_size=5;
	int temp[temp_size]={1,2,3,4,5};
	int sum=0;
	for (int i=0; i<temp_size; i++){
		sum+=temp[i];
	}
	cout<<sum<<endl;
	return 0;	
}


