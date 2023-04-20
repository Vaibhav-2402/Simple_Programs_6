#include<iostream>
using namespace std;
struct fraction
{
    int num;
    int denom;
};
int fadd(fraction, fraction);
int fsub(fraction, fraction);
int fmun(fraction, fraction);
int fdiv(fraction, fraction);
int main()
{
    fraction f1,f2;
    char ch,n;
    cout<<endl<<"Enter numerator of 1st fraction: "; cin>>f1.num;
    cout<<endl<<"Enter denominator of 2nd fraction: "; cin>>f1.denom;
    cout<<endl<<"Enter numerator of 2nd fraction: "; cin>>f2.num;
    cout<<endl<<"Enter denominator of 2nd fraction: "; cin>>f2.denom;
    do
    {
    cout<<" Enter the operation u want to perform on fractions i.e.(+,-,*,/) : "; cin>>ch;
    switch(ch);
    {
        if(ch=='+')
        fadd(f1,f2);
        else
        if(ch=='-')
        fsub(f1,f2);
        else 
        if(ch=='*')
        fmun(f1,f2);
        else 
        if(ch=='/')
        fdiv(f1,f2);
    }
    cout<<endl<<" Do u want to continue(y/n): "; cin>>n;
    }
    while(n=='y');

    return 0;
}
int fadd( fraction fuc1, fraction fuc2)
{
    cout<<endl<<"Your fraction after addition is: "<<(fuc1.num*fuc2.denom+fuc1.denom*fuc2.num)<<"/"<<fuc1.denom*fuc2.denom;
}
int fsub( fraction fuc1, fraction fuc2)
{
    cout<<endl<<"Your fraction after substraction is: "<<(fuc1.num*fuc2.denom-fuc1.denom*fuc2.num)<<"/"<<fuc1.denom*fuc2.denom;
}
int fmun(fraction fuc1, fraction fuc2)
{
    cout<<endl<<"Your fraction after muntiplication is: "<<(fuc1.num*fuc2.num)<<"/"<<fuc1.denom*fuc2.denom;
}
int fdiv(fraction fuc1, fraction fuc2)
{
    cout<<endl<<"Your fraction after division is: "<<(fuc1.num*fuc2.denom)<<"/"<<fuc1.denom*fuc2.num;
}
