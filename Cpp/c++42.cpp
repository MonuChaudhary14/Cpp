#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Object(Functor): Function wrapped in a class so that it available like an object

    int arr[] = {12,5,44,6,7,99,45};
    sort(arr , arr+5);      /*The elements upto 5 are sorted in increasing order*/
    sort(arr , arr+5 , greater<int>());    /*Now the first 5 elemnts are sorted in decending order and this change the upper code output*/
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}