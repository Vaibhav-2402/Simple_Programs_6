#include<iostream>
using namespace std;
int call();
int main()
{
    for(int i=1;i<=10;i++)
    {
        call();
    }

    return 0;
}
int call()
{
    static int count=0;
    count++;
    cout<<endl<<"I have been called "<<count<<" times ";
}