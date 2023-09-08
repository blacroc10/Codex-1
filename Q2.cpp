#include<iostream>
#include<limits.h>
using namespace std;
int main(){
cout<<"char:"<<CHAR_MIN<<" to"<< CHAR_MAX;
cout<<"\nshort int:"<<INT16_MIN<<" to"<< INT_MAX;
cout<<"\nlong int:"<<INT32_MIN<<" to"<< INT32_MAX;
cout<<"\ndouble:"<<__DBL_MIN__<<" to"<<__DBL_MAX__;

return 0;

}