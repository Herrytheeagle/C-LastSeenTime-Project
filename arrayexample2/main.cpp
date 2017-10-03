#include <iostream>

using namespace std;


int main()
{
  const  int arraySize =10;
    int caseettestore[arraySize]={};
    for(int i=0; i<arraySize; i++){
     caseettestore[i] = i*3;
        cout <<caseettestore[i] <<" ";
    }

    return 0;
}
