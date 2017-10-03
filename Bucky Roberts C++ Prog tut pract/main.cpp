#include <iostream>
#include "Deconstructor.h"
#include <cstring>
using namespace std;
//prototyping Soft function
int soft ();
//prototyping pointer function
  int pointer();
  //prototyping sizeof function
  double sizeof_Function();

   //declaring a Class
class HerryGeeClass{
   public:
       //A function to fetch a private variable in the same class
            HerryGeeClass(string z){
            setName(z);
            }
     void setName(string x) {
        name = x;
     }
    string getName(){
    return name;
    }


  private:
    string name;

};

int main()
{
    //declaring HerryGee class object
    HerryGeeClass ClassObject1("Heritage Samuel F \n");
    //using the classObject to call a function in the class
    cout << ClassObject1.getName()<< endl;
//declaring HerryGee class object2
              HerryGeeClass ClassObject2("Heritage Samuel F");
         //using the classObject to call a function in the class
    cout << ClassObject2.getName()<< endl;
    //Calling Pointer Function
  pointer();
  //Calling sizeof Function
          sizeof_Function();
          //Calling Soft Function
          soft();

          //Calling a Constant function with a constant function
          const Deconstructor ConstObj;
          ConstObj.ConstObjFunction();
//Deconstructor obj( 78,89);
//obj.print();
    return 0;
}
//Pointer Tutorial
int pointer (){
   int fish = 5;
   cout << &fish << endl;
    int *fishPointer;
    fishPointer = &fish;
    cout << fishPointer << endl;

    return 0;

}

//sizeof Tutorial
double sizeof_Function(){
 double LuckyBukkyRobert[10];

   cout<< sizeof(LuckyBukkyRobert)<<endl;
   cout << sizeof(LuckyBukkyRobert)/sizeof(LuckyBukkyRobert[0])<<endl;
   return 0;
}
//deconstructor tutorial
int soft (){
  Deconstructor bo;

return 0;
}

