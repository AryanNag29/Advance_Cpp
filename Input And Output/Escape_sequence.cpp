#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"My name is \"Aryan Nag\" "<<endl; //we put \ to escape a sequence and print
                                    // some pre define attribute of cpp
    /*
    cout<<"My name is "Aryan Nag" "; this will throw error
    */

    //cout<<"Aryan \ nag"; this will also throw warning: unknown escape sequence: '\040'
   
    int x{10};
    int y{20};
    cout<<x<<"\+"<<y<<"\= "<<x+y; // this is also an example of escape sequence
   
   
   
    return 0;
}