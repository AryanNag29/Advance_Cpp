#include <iostream>
using namespace std;

const double PI{3.14}; // const double

int main(){
    unsigned int radius;
    cout<<"Enter radius of circle:"<<endl;
    cin>>radius;
    cout<<"Area of a Circle is: "<<PI*radius*radius;
}

/*
1: when we put to a variable before it's data type we cannot change it's value
for the entire life of the program.

2: const can be modified using pointers by accessing the address location of the 
const variable but it's not a good practice to do so because it defeat the purpos 
of const keyword
*/