#include<iostream>
using namespace std;

bool issorted(int arr[] , int size){

    if((size = 0) || (size = 1)){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remaingpart = issorted(arr+1 , size -1);
        return remaingpart;
    }

}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;

    bool ans = issorted(arr , size);

    if(ans){
        cout<<"Sorted";
    }
    else{
        cout<<"not sorted";
    }

    return 0;
}