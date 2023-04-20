#include<iostream>
using namespace std;
struct time{
    int hrs;
    int minutes;
    int seconds;
};
int time_to_secs(time);
int secs_to_time(long, time&);
int main()
{
    time t1 = {3,25,56};
    time t3;
    long total_time = time_to_secs( t1 );
    cout<<endl<<"Equivalent time in seconds = "<<total_time;
    long t_time;
    cout<<endl<<"Enter an equivalent time: "; cin>>t_time;
    secs_to_time(t_time, t3 );
    cout<<endl<<"Eq. hours = "<<t3.hrs;
    cout<<endl<<"Eq. minutes = "<<t3.minutes;
    cout<<endl<<"Eq. hours = "<<t3.seconds;
    return 0;
}
int time_to_secs(time tt)
{
    long eqt = tt.hrs*3600+tt.minutes*60+tt.seconds;
    return eqt;
}
int secs_to_time(long l, time& t2)
{
    t2.hrs = l/3600;
    t2.minutes = (l-t2.hrs*3600)/60;
    t2.seconds = (l-t2.hrs*3600)%60;

}

