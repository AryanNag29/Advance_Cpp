// this is << insersion operator
// this is >> extraction operator

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name{};
    cout<<"Enter your name : ";
    getline(cin,name); // getline function is use to cin strings in cpp;
    cout<<"Welcome "<<name<<endl;
}