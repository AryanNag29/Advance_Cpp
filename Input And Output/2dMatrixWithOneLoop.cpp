#include <iostream>
using namespace std;

int main()
{
    //we can also but variable at 3 and 4
    int arr[3][4] = {{3, 4, 5, 7}, {5, 1, 7, 7}, {6, 7, 2, 8}};
    int i{0};
    int j{0};

    while (i != 3 && j != 4)
    {
        cout<< arr[i][j]<<"\t";
        j++;
        if(j == 4 && i<3){
            j = 0;
            i++;
            cout<<endl;

        }
    }
    return 0;
}