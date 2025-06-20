#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    auto a = 10;
    auto b = 15.6;
    cout<<a<<"\n"<<b<<endl;
    cout<<typeid(a).name()<<"\n"<<typeid(b).name();
    
        return 0;
}

/*
1 auto keyword in c++ will assign data type to our data automaticaly 
2 typeinfo header is use to see data type and many more of the variables
(it gives short form)
*/

/*
Advantage of auto
1 No conversion happens when auto is used
            float x = 3.4; //double is converter to float
            auto y = 3.4 // type of y is double 
2 if a function return auto its return can be changed without
worring about prototype change

3 can be very helpful for lengthy type, espicially STL iterator
    vector<int>::iterator i;
    auto i;

4 lembda expression

Disadvantage of auto
1 it makes readablity hard for a program
*/