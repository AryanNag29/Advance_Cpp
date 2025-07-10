#include <iostream>
#include <string>
using namespace std;

int main(){
    int a{20}, b{30};
    cout<<a<<" "<<b<<endl;
    cout<<std::hex; // turn on flag to print int to hexadecimal
    cout<<a<<" "<<b<<endl;
    cout<<std::oct; // turns on flag to print int to octadecimal
    cout<<a<<" "<<b<<endl; // for a = 2*8 + 4 = 10 and for b = 3*8 + 6 = 36
    cout<<std::dec; // turns on flag to print back to decimal
    cout<<a<<" "<<b<<endl;
    return 0;

}