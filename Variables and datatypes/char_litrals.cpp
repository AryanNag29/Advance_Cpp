/*in char litrals
no prefix : ASCII
U8: UFT-8
u: UFT-16
U: UFT-32
L: w char-t
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    char c{'g'}; // '' single for one char
    const char *s1 = "Aryan"; // "" double for more then one char and this is pointer to char
    string s2 = "aryan";
        cout<<c<<"\n"
            <<s1<<"\n"
            <<s2;
}