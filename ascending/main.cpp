#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=1;
    cout << "ENTER A NUMBER" << endl;
    cin>>n;
    int i=1;
         while(i<n){
         sum=sum+n;
         n--;
         cout<<"this is the sum in ascending order"<<sum<<endl;
         }
    return 0;
}
