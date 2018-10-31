//library
#include<iostream>
using namespace std;
//driver function
int main(){
//data initialization
int arr[10]={78,54,7,35,3,24,86,86,85,14};
//print of array by normal index method
int i;
	for(i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
//print of array by pointer method
int * p=arr;
	for(i=0;i<10;i++){
		cout<<*(p+i)<<endl;
	}
return 0;
}
