#include <iostream>
using namespace std;

int main(){
    cout<<sizeof(char)<<endl; //-128 to 127
    cout<<sizeof(unsigned char)<<endl; //0 to 225
    cout<<sizeof(short)<<endl; //-32768 to 32768
    cout<<sizeof(int)<<endl; //-2.14*10^9 to 2.14*10^9
    cout<<sizeof(unsigned int)<<endl;//0 to 4.19*10^9
    cout<<sizeof(long long)<<endl;//-9.2*10^18 to 9.2*10^18
    cout<<sizeof(unsigned long long)<<endl;//0 to 1.8*10^19
    cout<<sizeof(float)<<endl;//+-1.8*10^-38 to +-1.8*10^38
    cout<<sizeof(double)<<endl;//+-2.23*10^-308 to +-2.23*10^-308
    cout<<sizeof(bool)<<endl;// 0 to 1

    return 0;

}