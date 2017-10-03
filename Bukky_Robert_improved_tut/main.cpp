#include <QCoreApplication>
#include <iostream>
#include "base.h"
#include "inheritance.h"
using namespace std;

template <class Herry>

Herry goons (Herry a,Herry b){
    return a+b;
}

int main()
{
    double z, x=23.1, y=37.6;
    z=goons(y,x);
    cout << z<< endl;
    Base obj;
    obj.sayName();

   // Inheritance inObj;
   // inObj.sayName();
}
