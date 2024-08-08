#include <iostream>
#include<cmath>
using namespace std;

void merge(int arr1[], int arr2[] , int n  ,int m ,int arr3[]){

        int i = 0;
        int j = 0;
        int k = 0;

        while(i < n && j < m){

            if(arr1[i] < arr2[j]){
                arr3[k++] = arr1[i++];  
            }
            else{
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }

        while( i < n){    /*This is used when n is bigger and then the upper condition does not meet and we have to more arr1[] to add*/
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        while(j < m){    /*This is used when m is bigger than n and there are some elements left of arr2[] to insert*/
            arr3[k] = arr2[j];
            k++;
            j++;
        }

}

int main()
{

    int arr1[] = {1,3,6,7,9};
    int arr2[]= {2,4,5,8};
    int arr3[9];

    merge(arr1 , arr2 , 5 , 4 , arr3);

    for(int i = 0; i < 9 ; i++){
        cout<<arr3[i]<<" ";
    }


    return 0;
}