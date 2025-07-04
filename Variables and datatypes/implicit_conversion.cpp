/*
if we have variables of multiple type these rule will follow:
bool->char->short int->int->unsigned int ->long -> long long -> float -> double -> long double
*/
#include <iostream>
using namespace std;

int main(){
    int x = 10;
    char y = 'A';
    cout<<x+y<<"\n";
    float z = 4.4f;
    cout<<x+z<<endl;
    
return 0;
}