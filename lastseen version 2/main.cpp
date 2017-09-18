#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    double second = 1;
float minutes = 60;
float hour = 60*60;
float day =(60*60)*24;
float week = ((60*60)*24)*7;
float month = (((60*60)*24)*7)*4;
float year = ((((60*60)*24)*7)*4)*52.5;
    time_t now = time(0);
    double Lstsecond;
    float Lstminutes;
float Lsthour;
float Lstday;
float Lstmonth;
float Lstyear;

   cout << "Number of sec since January 1,1970:" << now << endl;
   cout << year<<endl;
   cout << month<<endl;
   cout << day<<endl;
   cout << hour<<endl;
   cout << minutes<<endl;
   cout << second<<endl;

   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

    tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Year" << 1970 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Hour: "<< 1 + ltm->tm_hour << ":"<<endl;
   cout << "Minutes"<<1 + ltm->tm_min << ":"<<endl;
   cout << "Seconds"<<1 + ltm->tm_sec << endl;



   cout << "Enter Last Seen"<< endl;
          cout << "Enter Last Seen in this order : year,: month,: day,: hour, : min, : sec"<<endl;
             cin >>Lstyear >> Lstmonth >>Lstday>> Lsthour >> Lstminutes >>Lstsecond;

double func (){

    double currYr=1970 + ltm->tm_year;
double currMnth=1 + ltm->tm_mon;
double currDy= ltm->tm_mday;
double currHr= 1 + ltm->tm_hour;
double currMin= 1 + ltm->tm_min;
double currSec= 1 + ltm->tm_sec;

  for (int i=Lstyear; i>=currYr; i--){
     double YrCounter=0;
     YrCounter=i;
  }

      for (int x=Lstmonth; x>=currMnth; x--){
           double MnthCounter=0;
           MnthCounter=x;
         }
                  for (int y=Lstday; y>=currDy; y--){
                        int DyCounter=0;
                        DyCounter=y;
                                   }
                                       for (int a=Lsthour; a>=currHr; a--){
                                           int HrCounter=0;
                                           HrCounter=a;
                                               }
                                                  for (int b=Lstminutes; b>=currMin; b--){
                                                    int MinCounter=0;
                                                    MinCounter=b;
                                                  }
                                                     for (int c=Lstsecond; c>=currSec; c--){
                                                        int SecCounter=0;
                                                         SecCounter=c;
                                                     }
 cout<<YrCounter<<":"<<MnthCounter<<":"<<DyCounter<<":"<<HrCounter<<":"<<MinCounter<<":"<<SecCounter<<endl;
    return 0;
}
return 0;
}
