#include <iostream>
#include <string>
 
int main(){
    bool a{true};
    std::cout<<a<<std::endl;
    std::cout<<std::boolalpha; //so this line manipulate IO operation to print bool variable as true and false
    std::cout<<a<<std::endl;
    std::cout<<std::noboolalpha; // this noboolalpha manipulate IO operation to print bool variable back to 1 and 0.
    std::cout<<a<<std::endl;

    return 0;

}