#include <iostream>
using namespace std;

int main()
{

    int arr[3][4];

    for(int row = 0; row < 3; row++){    /*This is row wise input*/
        for(int col = 0; col < 4; col++){

            cin>>arr[row][col];

        }
    }

 cout<<"For second table";
    int arr1[3][4];

    for(int col = 0; col < 4; col++){    /*This is column wise input*/
        for(int row = 0; row < 3; row++){

            cin>>arr[row][col];

        }
    }

   
    for(int row = 0; row < 3;row++){
        for(int col = 0; col < 4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int col = 0; col < 3;col++){
        for(int row = 0; row < 4; row++){
            cout<<arr1[col][row]<<" ";
        }
        cout<<endl;
    }

    int arr[3][2] = {1,2,3,4,5,6};   /*for row wise initilisation*/
    int arr[3][2] = {{1,1}, {2,2}, {3,3}};   /*For row wise input*/

    return 0;
}