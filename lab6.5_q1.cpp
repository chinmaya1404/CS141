//library
#include<iostream>
using namespace std;
//function
int main(){
//data initialization
int app,man,ban;
double tot;
//loop for apple
	for(app=0;app<=(100/1);app++){
	//loop for mango
		for(man=0;man<=(100/3);man++){
		//loop for banana
			for(ban=0;ban<=(100/0.5);ban++){
				tot=(1*app)+(3*man)+(0.5*ban);
				if(tot==100){
				//output
					cout<<"APPLE :"<<app<<",MANGO :"<<man<<",BANANA :"<<ban<<endl;
				}
			}
		}
	}
return 0;
}


