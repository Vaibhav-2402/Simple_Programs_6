#include<iostream>
using namespace std;
struct time
{
    int hours;
    int minutes;
    int seconds;
};

int swap(time&, time&);
int main()
{
    time num1 = {5,12,25};
    time num2 = {6,18,38};
    swap(num1,num2);
    cout<<endl<<" new hour1 "<<num1.hours;
    cout<<endl<<" new minute1 "<<num1.minutes;
    cout<<endl<<" new second1 "<<num1.seconds;
    return 0;
}
int swap(time& n1,time& n2)
{
    time temp=n1;
    n1=n2;
    n2=temp;
}