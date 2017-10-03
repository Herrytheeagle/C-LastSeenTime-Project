#include <iostream>

using namespace std;

class birds{
    public:
   int FlyingStrenth;

   void setFlyingStrenth (int y){
       FlyingStrenth = y;
   }
};
   class Ostrich: public birds{
 public:
    void fly (){
    cout<<"Pra..pa..pa..ka.ka..Ostrich!!..I can fly as high as :"<< FlyingStrenth<<endl;
    }

   };

   class Eagle: public birds{
 public:
    void fly (){
    cout<<"Skibi..ki..pa..pa...Eagle...I can fly as high as :"<< FlyingStrenth<<endl;
    }

   };

int main()
{
    Ostrich o;
    Eagle e;
    birds *obj1= &o;
    birds *obj2= &e;
    obj1->setFlyingStrenth(20);
    obj2->setFlyingStrenth(76);
o.fly();
e.fly();
    return 0;
}
