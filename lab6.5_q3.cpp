//library
#include<iostream>
using namespace std;
#include<cmath>
//driver function
int main (){
//data initialization
long i,sum;
sum=0;
//looping
	for(i=1;i>=1;i++){
		sum=sum+i;
		if(sqrt(sum)-int(sqrt(sum))==0){
			//output
			cout<<"THE NUMBER IS :"<<sqrt(sum)<<endl;
		}
	}

return 0;
}
