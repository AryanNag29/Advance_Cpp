#include <iostream>
using namespace std;

#define PI 3.14 // c style const double

int main(){
    unsigned int radius;
    cout<<"Enter radius of circle:"<<endl;
    cin>>radius;
    cout<<"Area of a Circle is: "<<PI*radius*radius;
}

// disadvantage is it does not has a predefine data type but it can be use for
// conditional compilation of a class