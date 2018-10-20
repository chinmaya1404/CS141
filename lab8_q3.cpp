//library declare
#include<iostream>
using namespace std;
//function define for arranging
void arra(int arr[],int n){
int i,j,a;
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
}
//definee function for kth max
int k_max(int arr[], int n, int k){
int kmax;
	kmax=arr[n-k];
return kmax;
}	
//define function for kth min
int k_min(int arr[],int n, int k){
int kmin;
	kmin=arr[k-1];
return kmin;
}
//main function
int main(){
int arr[]={5,5,2,5,6,9,3,7,2,5,9,1,5,1,8};
int k1,k2,i;
cout<<"Value of k for max and value of k for min"<<endl;
cin>>k1>>k2;
//calling function
arra(arr,15);
for(i=0;i<15;i++){
cout<< arr[i]<<endl;
}
cout<<"K-th max number is :"<<k_max(arr,15,k1)<<endl;
cout<<"K-th min number is :"<<k_min(arr,15,k2)<<endl;
return 0;
}
