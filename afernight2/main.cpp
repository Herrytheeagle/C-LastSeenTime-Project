#include <iostream>

using namespace std;

int main()
{

    int counter = 1;
    while(counter<=50)
    {
        cout << counter<<" ";
        if((counter%10)==0){
            cout <<endl;
        }
        counter++;
    }
    return 0;
}
