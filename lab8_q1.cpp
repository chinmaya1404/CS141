//library declare
#include<iostream>
using namespace std;

//function define for sum
int sum(int arr[], int n){
int i,sum=0;
for(i=0;i<n;i++){
	sum=sum+arr[i];
}
return sum;
}
//main function
int main(){
int arr[]={5,5,2,5,6,9,3,7,2,5,9,1,5,1,8};
//calling function
cout<<"	Sum of the numbers are :"<<sum(arr,15)<<endl;
return 0;
}
