#include<iostream>
using namespace std;

bool binarysearch(int arr[]  ,int start , int end , int key){ 
       if(start > end){
        return false;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] < key){
        return binarysearch(arr , mid+1 , end , key);
    }
    else if(arr[mid] > key){
        return binarysearch(arr , start , mid - 1, key);
    }
    if(arr[mid] == key){
        return true;
    }
}
 
int main(){
    int arr[] = {1,2,4,5,6,7,9};
    int key;
    cin>>key;

    if(binarysearch(arr , 0, 7 , key)){
        cout<<"Present";
    }
    else{
        cout<<"Not present";
    }
    
    return 0;
}