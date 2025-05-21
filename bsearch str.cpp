#include <iostream>
using namespace std;
string bsearch(string ar[], int s, string sk){
	int mid,low=0, high=s-1;
	do{
		mid=(low+high)/2;
		if(sk==ar[mid]){
			cout<<mid;
			return 0;
		} else if(sk<ar[mid]){
			high=mid-1;
		} else{
			low=mid+1;
		}
	} while(low<=high);
	return 0;
}
int insertionsort(int ar[],int s){ //for insertion 
	for(int i=0; i<s; i++){
		int temp=ar[i];
		for(int j=i;j>0&&temp<ar[j-1];j++{
		ar[j]=ar[j-1];
		ar[j-1]=temp;
		}
	}
}
int main(){
/*	string nums[]={"www","qqq","mmm","aaa","ddd"};
	int z=5;
	string sk="mmm";
	string aaa = bsearch(nums,z,sk);
	cout<<aaa;*/
	int nums[]={1,2,3,4,5};
	int x=3;
	int aaa= insertionsort(nums,x);
	cout<<aaa;
	return 0;
}
