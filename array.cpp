//array addition
/*#include <iostream>
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
}*/


//array and loops
// example outputs all elements in the cars array

/*#include <iostream>
#include <string>
using namespace std;
int main(){
	string cars[3]={"tvs", "yaris", "bmw"};
	for (int i = 0; i<3; i++ ){
		cout<<cars[i]<<endl;
	}
	return 0;
}*/

//Find the Average of All Elements
// Input: [10, 20, 30, 40, 50]
// Output: 30
/*#include <iostream>
using namespace std;
int main(){
	int size_num = 5;
	int size[size_num]={10,20,30,40,50};
	double sum=0;
	for(int i=0; i<size_num; i++){
		sum+=size[i];	
	}
	double avg = (double)sum/size_num;
	cout<<avg;
	return 0;
}*/

//Find the Maximum Element
// Input: [1, 5, 3, 9, 2]
// Output: 9
/*#include <iostream>
using namespace std;
int main(){
	int nums[5]={1,5,3,9,2};
	int max_num=nums[0];//assume it at the big one
	for (int i = 0; i<5; i++){
		if (max_num<nums[i]){
			max_num=nums[i];//update value
		}
	}
	cout<< max_num;
	return 0;
}*/

//Find the Minimum Element
// Input: [4, 7, 1, 6]
// Output: 1

/*#include <iostream>
using namespace std;
int main(){
	int nums[5]={12,23,3,5,7};
	int min_num=nums[0];
	for (int i = 0; i<5; i++){
		if (nums[i]<min_num){
			min_num=nums[i];
		}
	}
	cout<<min_num;
	return 0;
}*/


//Count How Many Even Numbers
// Input: [1, 2, 3, 4, 6]
// Output: 3  (because 2, 4, and 6 are even)

/*#include <iostream>
using namespace std;
int main(){
	int nums[5]={1,2,3,4,6};
	int count= 0;
	for (int i=0; i<5; i++){
		if (nums[i]%2==0){
			count++;//for counting elements
		}
	}
	cout<<count<<endl;
	return 0;
}*/

//number of elements counter in array
/*#include <iostream>
using namespace std;
int main(){
	int nums[5]={1,2,3,4,5};
	int count=0;
	for (int i = 0; i<5; i++){
		count++;
	}
	cout<<count<<endl;
	return 0;
}*/


//Reverse the Array
// Input: [1, 2, 3, 4, 5]
// Output: [5, 4, 3, 2, 1]

/*#include <iostream>
using namespace std;
int main(){
	int nums[5]={1,2,3,4,5};
	for (int i=4; i>=0; --i){
		cout<<nums[i]<<endl;
	}
	return 0;
}*/

//Print All Elements Greater Than a Given Number
// Input: [10, 5, 20, 8], N = 8
// Output: 10 20

/*#include <iostream>
using namespace std;
int main(){
	int nums[4]={10,5,20,8};
	int n = 8;
	for (int i=0; i <4; i++){
		if (n<nums[i]){
			cout<<nums[i]<<endl;
		}
	}
	return 0;
}*/

//Add Two Arrays Element-wise
// Input: A = [1, 2, 3], B = [4, 5, 6]
// Output: [5, 7, 9]

/*#include <iostream>
using namespace std;
int main(){
	int a[3]={1,2,3};
	int b[3]={4,5,6};
	int c[3];
	for (int i=0; i<3; i++){
		c[i]=a[i]+b[i];
		cout<<c[i]<<endl;
	}
	return 0;
}*/


//Find the Second Largest Number
// Input: [10, 20, 5, 30]
// Output: 20

#include <iostream>
using namespace std;
int main(){
	int nums[4]={10,20,5,30};
	int max=nums[0];
	int max2=nums[0];
	for(int i=0; i<4; i++){
		if (max<nums[i]){
			max=nums[i];
		} else if (max2<nums[i] && nums[i]!=max){
			max2=nums[i];
		}
	}
	cout<<max2;
	return 0; 
}
