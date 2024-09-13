/*Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create
an array dynamically of Time of size 5
Accept the values and display.*/

#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    
    Time() {
        hour = 0;
        minute = 0;
        second = 0;
    }

   
    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    
    int getHour() {
        return hour;
    }

    
    int getMinute() {
        return minute;
    }

    
    int getSeconds() {
        return second;
    }

    
    void setHour(int h) {
        hour = h;
    }

    
    void setMinute(int m) {
        minute = m;
    }

    
    void setSeconds(int s) {
        second = s;
    }

    
    void printTime() {
        cout<< hour << ":";
        cout<< minute << ":";
        cout<< second << endl;
    }
};

int main() {
    
    Time** times = new Time*[5];

    times[0] = new Time(7,30,05);
    times[1] = new Time(8,10,40);
    times[2] = new Time(9,30,10);
    times[3] = new Time(10,5,22);
    times[4] = new Time(1,40,50);



    cout << "Displaying times:" << endl;
    for (int i = 0; i < 5; i++) {
        times[i]->printTime();
    }
    for (int i = 0; i < 5; i++) {
        delete times[i];
        times[i]=NULL;
    }

    delete[] times;
    times = NULL;

    return 0;
}
