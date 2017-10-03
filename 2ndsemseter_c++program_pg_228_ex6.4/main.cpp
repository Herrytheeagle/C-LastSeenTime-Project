#include <iostream>

using namespace std;

int main()
{

    int score[]={};
    int total=0;
    int numberOfInput;
    /*This is a program to determine score that are below average or that
    are above the average*/
    cout << "~PROGRAM TO DETERMINE SCORES BELOW AVERAGE AND SCORES ABOVE AVERAGE~" << endl;
    /*NOTE:-The maximum number if score is assumed to be 10,
    and the program also reads unspecified numbers of scores*/
    cout << "******(MAXIMUM NUMBER OF SCORE IS ASSUMED TO BE 10)*******" <<endl;
     cout << "TYPE IN A SCORE" <<endl;
    do{
       cin >> score ;
       if(score != -1)
        {
       total = total + score;
       numberOfInput++;
        }
       }
    while(score != -1);
    cout <<"Total: "<<total;
    cout <<"Average: "<<total/numberOfInput;
    return 0;
}
