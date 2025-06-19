#include <iostream>
using namespace std;
// a scope is this curly braces {} whenever you enter {} in your program it create scope

int x = 10;

int main(){
    int x = 20;
    cout<<x<<endl;
    {
        int x = 30;
        cout<<x<<endl;
        {
            int x = 40; 
            cout<<x;
        }
    }
    return 0;
}

/*
1 function, loops and conditional statement create a new inner scope
2 the outer scope variable are accessible in the inner scope but vise versa is not possible 
3 we can create a new scope by using a pair of curly brackets
*/