#include<iostream>
using namespace std;
int power(double,int);
int power(double,char);
int power(double,long);
int power(double,float);
int main()
{
    double n,num,num1,num2;
    int p1;
    char p2;
    long p3;
    float p4;
    cout<<endl<<"Enter number whose power is to be determined: "; cin>>n;
    cout<<endl<<"Enter the power in int: "; cin>>p1;
    power(n, p1);
    cout<<endl<<"Equivalent number = "<<n;
    cout<<endl<<"Enter number whose power is to be determined: "; cin>>num;
    cout<<endl<<"Enter the power in char: "; cin>>p2;
    power(num, p2);
    cout<<endl<<"Equivalent number = "<<n;
    cout<<endl<<"Enter number whose power is to be determined: "; cin>>num1;
    cout<<"Enter the power in long: "; cin>>p3;
    power(num1, p3);
    cout<<endl<<"Equivalent number = "<<n;
    cout<<endl<<"Enter number whose power is to be determined: "; cin>>num2;
    cout<<endl<<"Enter the power in float: "; cin>>p4;
    power(num2, p4);
    cout<<endl<<"Equivalent number = "<<n;
    return 0;
}

int power(double d, int k)
{ 
    int temp = 1;
    for(int i =1; i<=k; i++)
    {
        d*=temp;
    }
    return d;
}

int power(double d1, char k)
{
    double temp=1;
    for(int i =1; i<=k; i++)
    {
        
        d1*=temp;
    }
    return d1;
}
int power(double d2, long k)
{
    double temp=1;
    for(int i =1; i<=k; i++)
    {
        
        d2*=temp;
    }
    return d2;
}
int power(double d3, float k)
{
    double temp=1;
    for(int i =1; i<=k; i++)
    {
        
        d3*=temp;
    }
    return d3;
}
