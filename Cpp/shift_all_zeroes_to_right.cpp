#include <iostream>
using namespace std;

void zero(int arr[], int n)
{

    int nonzero = 0; /*index at which first non zero should come*/

    for(int i = 0; i < n; i++){

        if(arr[i] != 0){
            swap(arr[i] , arr[nonzero]);
            nonzero++;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 0, 5, 0, 4, 0, 0};

    zero(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}