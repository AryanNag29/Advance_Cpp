#include <iostream>
using namespace std;

int main(){
    int a{20};
    cout<<std::oct;
    cout<<std::showbase; // it add zero to int prefix and ther is noshowbace flag too
    cout<<a<<endl;
    cout<<std::hex;
    cout<<std::showpos; // it show pos in the prefix of int
    cout<<a<<endl;  
    cout<<std::uppercase; // upper case the value
    cout<<a<<endl;
    return 0;
}