#include<iostream>
using namespace std;
//Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array.  
int countEven(int * ptr,int n){
int i,j=0;
	for(i=0;i<n;i++){
		if(*(ptr+i)%2==0)
			j++;
	}
return j;
}
int main(){
int i,n;
int arr[n];
int *ptr;
ptr=arr;
cout<<"Number of integers in the Integer array"<<endl;
cin>>n;
//enter elements of integer array
for(i=0;i<n;i++){
	cout<<"Enter "<<i<<"th element of array"<<endl;
	cin>>arr[i];
}
//show output
cout<<"Number of even integers in the array :"<<countEven(ptr,n)<<endl;
return 0;
}
