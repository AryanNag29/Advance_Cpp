#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    auto a = 10;
    auto b = 15.6;
    cout<<a<<"\n"<<b<<endl;
    cout<<typeid(a).name()<<"\n"<<typeid(b).hash_code();
    
        return 0;
}

/*
1 auto keyword in c++ will assign data type to our data automaticaly 
2 typeinfo header is use to see data type and many more of the variables
(it gives short form)
*/