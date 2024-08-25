#include <iostream>
#include<climits>
using namespace std;  /*Problem when given same elements they repeat twice*/

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j;
    cin >> j;

    int arr1[j];
    for (int k = 0; k < j; k++)
    {
        cin >> arr1[k];
    }

    int a, b;
    while(a < n && b < j){

        if(arr[a] == arr1[b]){
            cout<<arr[a];
            a++;
            b++;
        }
        else if( arr[a] < arr1[b]){
            a++;
        }
        else{
            b++;
        }
    }

    return 0;
}