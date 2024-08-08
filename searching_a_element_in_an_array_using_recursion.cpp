#include<iostream>
using namespace std;

bool search(int *arr ,int size , int n){

    if(size == 0){
        return false;
    }
    if(arr[0] == n){
        return true;
    }                    /*In this array reduce from one element from left side so arr[0] change everytime*/
    else{
        bool remainingpart = search(arr+1 , size -1 , n);
        return remainingpart;
    }
}
 
int main(){
    int n;
    cin>>n;

    int arr[] = {1,2,3,4,8,7,9};

    if(search(arr , 7 , n)){
        cout<<"Present";
    }
    else{
        cout<<"Not present";
    }
    
    return 0;
}