//library declare
#include<iostream>
using namespace std;
//function define for max
int max(int arr[], int n){
int i,a=arr[0];
for(i=0;i<n;i++){
	if(a<arr[i])
		a=arr[i];
	}
return a;
}
//function define for min
int min(int arr[], int n){
int i,a=arr[0];
for(i=0;i<n;i++){
	if(a>arr[i])
		a=arr[i];
	}
return a;
}
//function define for mean
float mean(int arr[], int n){
int i;
float mean,sum=0;
for(i=0;i<n;i++){
	sum=sum+arr[i];
}
mean=sum/n;
return mean;
}
//function define for median
float med(int arr[],int n){
int i,j,a;
float medi;
for(i=0;i<n;i++){
	a=arr[i];
	for(j=i+1;j<n;j++){
		if(arr[j]<arr[i]){
			a=arr[j];
			arr[j]=arr[i];
			arr[i]=a;
		}
	}
}
	if(n%2==0)
		medi=(arr[n/2]+arr[n/2+1])/2;
	else
		medi=arr[(n+1)/2];
return medi;
}
//function define for high frequency mod
}
//main function
int main(){
int arr[]={5,5,2,5,6,9,3,7,2,5,9,1,5,1,8};
//calling function
cout<<"Max number is :"<<max(arr,15)<<endl;
cout<<"Min number is :"<<min(arr,15)<<endl;
cout<<"Mean is :"<<mean(arr,15)<<endl;
cout<<"Median is :"<<med(arr,15)<<endl;
return 0;
}
