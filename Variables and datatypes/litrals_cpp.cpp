//Using prefix in integer litrals
#include <iostream>
using namespace std;

int main(){
    int a = 20; // No prefix->Decimal
    int b = 0x1A; //Hexadecimal
    int c = 016; //octal
    int d = 0b11;//binary

    cout<<a<<"\n" // 20
        <<b<<"\n" // 26  how -> 10*16^0 + 1*16^1
        <<c<<"\n" // 14
        <<d<<"\n";// 3
    return 0;
}