#include <iostream>
using namespace std;

extern int x; // extern keyword is used to decleara variable or function without defing it.indicates
//that the actual defination exist somewhere else

int main(){
    cout<<x;
    return 0;
}
int x = 10;