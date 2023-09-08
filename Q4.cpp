#include<iostream>
using namespace std;

int main(){
    cout<<"Enter 1 For Addition\n Enter 2 for Subtraction\n Enter 3 for Mulitplication \n Enter 4 for Division\n Enter 5 for absolute function";
int q;
float a,b,c,d;
cout<<"\nEnter Value of Q:";
cin>>q;
cout<<"Enter value of a:";
cin>>a;
cout<<"Enter value of b:";
cin>>b;

if(q==1){
c=a+b;
cout<<"Value is:"<<c;
}

else if(q==2){
c=a-b;
cout<<"Value is:"<<c;
}
else if(q==3){
c=a*b;
cout<<"Value is:"<<c;
}
else if(q==4){

c=a/b;
cout<<"Value is:"<<c;
}

if ( q==5 && a<0 && b<0){

    c=a*-1;
    d=b*-1;
    cout<<"Value is:"<<c;
    cout<<"\nValue is:"<<d;
}
else if ( q==5 && a>0 && b<0){

    c=a*1;
    d=b*-1;
    cout<<"Value is:"<<c;
    cout<<"\nValue is:"<<d;
}
else if ( q==5 && a<0 && b>0){

    c=a*-1;
    d=b*1;
    cout<<"Value is:"<<c;
    cout<<"\nValue is:"<<d;
}
else if ( q==5 && a>0 && b>0){

    c=a*1;
    d=b*1;
    cout<<"Value is:"<<c;
    cout<<"\nValue is:"<<d;
}
return 0;









}