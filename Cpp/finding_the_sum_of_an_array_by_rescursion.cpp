#include<iostream>
using namespace std;

int getsum(int *arr , int size){

    if(size == 0){
        return 0;
    }
    else if(size == 1){
        return arr[0];
    }
    // int remaingpart = 0;
    int remaingpart = /*remaingpart  +*/ getsum(arr+1 , size-1);
    int sum = arr[0] + remaingpart;
    return sum;
}

int main(){
    int arr[] = {4,2,3,4,9,7,9};

    cout<<getsum(arr , 7);
    
    return 0;
}