#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>>& matrix , int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row*col-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        int element = matrix[mid/col][mid%col];

        if(element == target){
            return 1;
        }
        if(element <target){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
        }
        return 0;
}
 
int main(){

    int arr[3][3] = {1,2,3,41,5,4,8,7,6};
    
    return 0;
}
