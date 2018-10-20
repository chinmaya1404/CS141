//include library
#include<iostream>
using namespace std;
//define function for merging two  arrays
void fun(int arr1[],int i, int arr2[], int j){
int k,l;
for(k=0;k<(i+j);k++){
	if(k<i)
		arr1[k]=arr1[k];
	else
		arr1[k]=arr2[k-i];
}
for(k=0;k<i+j;k++){
	cout<<arr1[k]<<endl;
}
}
//define function for maxm array
int max(int arr[],int k){
int l,p;
p=arr[0];
for(l=0;l<k;l++){
	if(p<arr[l])
		p=arr[l];
}
return p;
}
//define function for min array
int min(int arr[], int k){
int l,p;
p=arr[0];
for(l=0;l<k;l++){
	if(p>arr[l])
		p=arr[l];
}
return p;
}
//driver function
int main(){
int arr1[20],arr2[20],i,j,k,m;
//input data
cout<<"Enter size of first array"<<endl;
cin>>i;
cout<<"Enter elements of first array"<<endl;
for(m=0;m<i;m++){
cin>>arr1[m];
}
cout<<"Enter size of second array"<<endl;
cin>>j;
cout<<"Enter elements of second array"<<endl;
for(m=0;m<j;m++){
cin>>arr2[m];
}
k=i+j;
//calling function
cout<<endl<<"Merged array is :"<<endl;
fun(arr1,i,arr2,j);
cout<<endl;
cout<<"Maximum is :"<<max(arr1,k)<<endl;
cout<<"Minimum is :"<<min(arr1,k)<<endl;
return 0;
}
