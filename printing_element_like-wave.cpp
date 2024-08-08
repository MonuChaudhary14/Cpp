#include<iostream>
using namespace std;
 
int main(){

    int arr[2][2] = {{1,2}, {3,4}};

    for(int col = 0; col <= 2; col++){

            if(col % 2 == 0){
            for(int row = 0; row <= 2; row++){
                cout<<arr[row][col]<<" ";
            }
            }
            else if(col % 2 == 1){
            for(int row = 2; row >= 0; row--){
                cout<<arr[row][col] << " ";
            }
            }
        cout<<endl;
    }
    
    return 0;
}