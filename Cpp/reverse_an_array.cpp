#include <iostream>
using namespace std;

void print(int arr[] , int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[] , int n){
    int start = 0;
    int end = n-1;

    while( start <= end)
{
    swap(arr[start], arr[end]);
    start++;
    end--;
}
}
int main()
{
    int arr[] = {1,4,7,8,5,2,3};
    int brr[] = {2,6,3,5,4,9,7};

    reverse(arr, 7);
    reverse(brr, 7);

    print(arr, 7);
    print(brr, 7);


    return 0;
}