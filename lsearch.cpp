#include <iostream>
using namespace std;
//linear search
int linear_search(int arr[], int size, int value){
	for(int i =0; i<size; i++){
		if (arr[i]==value){
			return i;
		}
	}
	return -1;
}
int mainnn(){
	int ar[]={1,2,3,4,5};
	int d=linear_search(ar,5,3);
	if (d!=-1){
		cout<<"found at index: "<<d<<endl;
	} else{
		cout<<"Value not found"<<endl;
	}
	return 0;
}
int main(){
	int ar[]={1,2,3,4,5};
	int d=linear_search(ar,5,3);
	if (d!=-1){
		cout<<"found at index: "<<d<<endl;
	} else{
		cout<<"Value not found"<<endl;
	}
	return 0;
}
