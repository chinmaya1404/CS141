#include<iostream>
using namespace std;
//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
double* maximum(double* a,int size){
if(size>0){
double i;
double c=*(a);
	for(i=0;i<size;i++){
		if(*(a+i)>c)
			c=*(a+i);
	}
return c;
}
else 
return NULL;
}
int main(){
int i,n;
double arr[n];
double *ptr;
ptr=arr;
cout<<"Number of integers in the Integer array"<<endl;
cin>>n;
//enter elements of integer array
for(i=0;i<n;i++){
	cout<<"Enter "<<i<<"th element of array"<<endl;
	cin>>arr[i];
}
//show output
cout<<maximum(ptr,n)<<endl;
return 0;
}
