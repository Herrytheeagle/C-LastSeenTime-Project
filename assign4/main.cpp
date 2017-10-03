#include <iostream>

using namespace std;
int perimeter(int lenght, int breadth);
int area(int length,int breadth);
void congrat();
int main()
{
    int length;
    int breadth;

    cout <<"write d length of d regtangle";
    cin >> length;
    cout <<"write d breadth of d regtangle";
    cin >> breadth;
 cout << "The perimeter of 5 and 6 is "<< perimeter(length,breadth)<< endl;
 //cout << "The area of 5 and 6 is "<<area(6,5);
 congrat();
    return 0;
}
void congrat(){
cout << "congratulations ";
return;
}
int perimeter(int length, int breadth)
{

  return 2*(length + breadth);

}
int area(int lenght, int breadth){
    return (lenght * breadth);
 }







