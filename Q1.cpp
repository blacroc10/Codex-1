#include<iostream>
#include<string>
using namespace std;

int main(){
    string Name;
    int age;
    string College;
    cout<<"Please enter your Full name:";
    getline(cin,Name);
    cout<<"\nPlease enter your age:";
   cin>>age;
   cin.ignore();
    cout<<"\nPlease enter your college name:";
    getline(cin,College);

    cout<<"Hello "<<Name<<", I see you are "<<age<<" years old and currently studying at "<<College<<endl;

    return 0;






}