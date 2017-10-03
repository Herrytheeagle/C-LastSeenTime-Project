#include "Deconstructor.h"
#include <iostream>

using namespace std;
/*Deconstructor::Deconstructor(int a, int b)
:
regVar(a),
constVar(b)
{
}
void Deconstructor::print(){
cout << "regular var is"<< regVar << "const variable is"<< constVar<<endl;
}*/

Deconstructor::Deconstructor()
{
    cout << "I am the constructor"<<endl;
}

   Deconstructor::~Deconstructor()
   {
       cout<<"Am the Deconstructor";
   }

   void Deconstructor::ConstObjFunction() const{
   cout<<"I am the constant object function"<<endl;
   }
