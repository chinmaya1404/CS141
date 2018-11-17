//include library
#include<iostream>
using namespace std;
#include<string>
//define class ZooAnimal
class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
      void Create(char* name,int cageNum,int weiDat,int wei){
	this->name = name;	
	};
   };
void ZooAnimal::Destroy ()
   {    
    delete [] name;
   }

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }
   
   // -------- member function to return the number of days
   // -------- since the animal was last weighed
int ZooAnimal::daysSinceLastWeighed (int today)
   {
    int startday, thisday;

if (today < weightDate) 
        today += 360;
      return (today-weightDate);
   }

int main(){


ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName() << endl;

   // bozo.Destroy ();
return 0;
}	
		

