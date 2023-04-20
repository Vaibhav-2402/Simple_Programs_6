#include<iostream>
using namespace std;
int swap(int&, int&);
int main()
{
    int num1,num2;
    cout<<endl<<"Enter number 1: "; cin>>num1;
    cout<<endl<<"Enter number 2: "; cin>>num2;
    swap(num1,num2);
    cout<<endl<<" new number 1 = "<<num1;
    cout<<endl<<" new number 2 = "<<num2;
    return 0;
}
int swap(int& n1,int& n2)
{
    int temp=n1;
    n1=n2;
    n2=temp;
}