#include <iostream>
#include <ctime>

using namespace std;
 struct Time
    {
      double sec;
      double minutes;
      double hours;
   };


 void generateTimeInterval(struct Time T1, struct Time T2, struct Time *difference){
     if(T2.sec > T1.sec)
    {
        --T1.minutes;
        T1.sec += 60;
    }

    difference->sec = T1.sec - T2.sec;
    if(T2.minutes > T1.minutes)
    {
        --T1.hours;
        T1.minutes += 60;
    }
    difference->minutes = T1.minutes-T2.minutes;
    difference->hours = T1.hours-T2.hours;
 };

int main() {

 void  generateTimeInterval(struct Time ,struct Time, struct Time);



   // current date/time based on current system
   time_t now = time(0);

   cout << "Number of sec since January 1,1970:" << now << endl;

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Year" << 1970 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;

    struct Time T1, T2, difference;


        cout << "Enter Last Seen"<< endl;
          cout << "Enter Last Seen in this order : hour, : min, : sec"<<endl;
             cin >> T1.hours >> T1.minutes >> T1.sec;


        //cout <<"Enter Current Time"<< endl;
          /* cout <<"Enter Current Time in this order : hour, : min, :sec"<<endl;
                cin >> T2.hours >>T2.minutes >> T2.sec;*/

    generateTimeInterval( T1, T2, &difference);
    T2.hours=1 + ltm->tm_hour ;
    T2.minutes= 1 + ltm->tm_min;
    T2.sec= 1 + ltm->tm_sec;

    cout << "TIME INTERVAL: " << endl;
    cout << "LAST SEEN IS: " <<T1.hours<<":"<<T1.minutes<<":"<<T1.sec<< endl;
    cout << "CURRENT TIME IS: " <<T2.hours<<":"<<T2.minutes<<":"<<T2.sec<<endl;
    if (difference.hours <= 1){
        cout << "HE HAS BEEN OFFLINE FOR: "<<difference.hours<<"hour:"<<difference.minutes<<"mins:"<<difference.sec<<"sec"<<endl;
    }
    else{
    cout << "HE HAS BEEN OFFLINE FOR: "<<difference.hours<<"hours:"<<difference.minutes<<"mins:"<<difference.sec<<"sec"<<endl;
    };


}
