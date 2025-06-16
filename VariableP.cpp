/*
variables
1 it has a data type(int , float ,bool, long long etc)
2 then variable name which should be meaning full
3 it can store particular data of it data type to our memory
*/
#include <iostream>
using namespace std;

int main(){
    int personAge{25};//convention camel case
    string person_name{"Aryan"};// convention snake case
    const int MAX_AGE{65};//constant always at upper case

    cout<<"The person name "<<person_name<<" he is "<<personAge<<" Year old"<<" And he will retire at the age of "<<MAX_AGE<<" Year old"<<endl;
    return 0;
}