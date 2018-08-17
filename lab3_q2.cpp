//include library
#include<iostream>
using namespace std;
//declare function
int main()
{

//declare variables
int var1,var2,add,sub,mul,modu;
float div;
//input variables
cout<<"ENTER 1ST VARIABLE";
cin>>var1;
cout<<"ENTER 2ND VARIABLE";
cin>>var2;

//operations
add=var1+var2;
sub=var1-var2;
mul=var1*var2;
div=var1/var2;
modu=var1%var2;
//output
cout<<"ADDITION IS "<<add<<endl;
cout<<"SUBSTRACTION IS "<<sub<<endl;
cout<<"MULTIPLICATION IS "<<mul<<endl;
cout<<"DIVISION IS "<<div<<endl;
cout<<"MODULUS IS "<<modu<<endl;

//terminate function
return 0;
}

