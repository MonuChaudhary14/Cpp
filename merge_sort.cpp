#include<iostream>
using namespace std;

void merge(int arr[] , int start , int end){

    int mid = start + (end - start)/2;

    int len1 = mid - start +1;  /*NUmber of element in a array*/
    int len2 = end - mid;

    int * first = new int[len1];
    int * second = new int[len2];

    // copy arrays
    int mainarrayindex = start;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainarrayindex++];
    }
    // cout<<"HI";
    mainarrayindex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainarrayindex++];
    }

    // merge 2 sorted array

    int index1 = 0;
    int index2 = 0;

    mainarrayindex = start;

    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){
            arr[mainarrayindex++] = first[index1++];
        }
        else{
            arr[mainarrayindex++] = second[index2];
        }
    }

    while(index1 < len1){
        arr[mainarrayindex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainarrayindex++] = second[index2++]; 
    }
    // cout<<"hello";

    delete []first;
    delete []second;
}

void mergesort(int arr[] , int start,  int end){

    // base condition
    if(start >= end){
        return ;
    }

    int mid = start + (end - start)/2;

    // sorting left part
    mergesort(arr , start , mid);    /*Breaking the array*/

    // sorting right part
    mergesort(arr , mid+1 , end);   /*Breaking the array*/

    merge(arr , start , end);
    // cout<<"kaise ho"<<endl;
}
 
int main(){

    int arr[] = {4,6,7,8,41,5};
    int n = 6;

    mergesort(arr , 0, n-1);

    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}