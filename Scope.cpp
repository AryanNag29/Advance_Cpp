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
            int x = 40; // this will print
            cout<<x;
        }
    }
    return 0;
}