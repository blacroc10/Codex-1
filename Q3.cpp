#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter First Number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
cout<<"Enter third number:";
cin>>c;

if(a>b & a>c)
{
    cout<<"The Greatest Number is "<<a;
}
if(b>a & b>c)
{
    cout<<"The Greatest Number is "<<b;
}
if(c>a & c>b)
{
    cout<<"The Greatest Number is "<<c;
}
return 0;







}