#include <iostream>
using namespace std;

int main(){
    int a{10};
    int b{20};

    if(a = 10){
        int temp = a;
        a = b;
        b = temp;
        cout<<a<<"\n"<<b;
    }
}