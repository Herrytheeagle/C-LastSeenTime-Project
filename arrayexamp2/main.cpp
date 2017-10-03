#include <iostream>

using namespace std;

int printArray(int narray[], int indices);

int main()
{
  const int realindices =10;
int arraymy[realindices]={12,23,23,45,56,56,98,34,98,20};

printArray(arraymy, realindices);

`
    return 0;
}

int printArray(int narray[], int indices){
for(int i =0; i< indices; i++){
    //narray[i];
    cout <<narray[i]<<endl;
}
}



