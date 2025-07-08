/*buffring can be explain by this ex. as you can see you have to enter 1 integer then the second
  integer but i enter both integer at same time with space between them so the buffrer remember the
  value you entered and then assign it to next variable (this can cause errors too).

  output-:
Enter the first integer: 
10 20
Enter the second integer: 
Multiplication is: 200
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the first integer: "<<endl;
    cin>>x;
    cout<<"Enter the second integer: "<<endl;
    cin>>y;
    cout<<"Multiplication is: "<<x*y;

}