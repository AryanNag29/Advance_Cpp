/* floting point litlars 
prefix - 0x
suffix- f(float),l(long double)
*/

#include <iostream>
using namespace std;

int main(){
    float a = 10.f;// float 
    double b = 10.2;// double
    float c = 29.1e15f;
    double d = 0x1A.1p2; 
    cout<<a<<"\n"
        <<b<<"\n"
        <<c<<"\n"
        <<d<<"\n";

return 0;
}
