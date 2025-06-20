#include <iostream>
 
int main(){
    static int x; // static variables
    std::cout<<x;
    return 0;
}

/*
1 static local variable are created and stays for lifetime of program
2 static data member of a class can be shared by all objects
3 static data of a class access only static data
4 static global variables have internal linkage

*/