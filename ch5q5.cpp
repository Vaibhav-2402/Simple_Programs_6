#include<iostream>
using namespace std;
int hrs_to_sec(int hours,int minutes, int seconds);
int main()
{
    int ghanta;
    int mins;
    int sec;
    cout<<endl<<"Enter hours: "<<endl; cin>>ghanta;
    cout<<"Enter minutes: "<<endl; cin>>mins;
    cout<<"Enter seconds: "<<endl; cin>>sec;
    cout<<"Your Entered time is = "<<ghanta<<":"<<mins<<":"<<sec;
    int k = hrs_to_sec(ghanta,mins,sec);
    cout<<endl<<" your Entered time in seconds="<<k;
    return 0;

}
int hrs_to_sec(int hours,int minutes,int seconds)
{
    double total;
    total=hours*3600+minutes*60+seconds;
    return total;
}