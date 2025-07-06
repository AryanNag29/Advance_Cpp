/* 
In this conversion we use static cast to convert the folling expression before the implementation
*/
#include <iostream>
using namespace std;

int main(){
    int a = 15;
    int b = 2;
    double c = a/b; // without explicit conversion
    double d = static_cast<double>(a)/b;// with explicit conversion  this will give you the right answer

    cout<<c<<"\n"<<d;
}