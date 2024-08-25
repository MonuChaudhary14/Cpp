// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

    void nextPermutation(vector<int>& nums) {

        int index = -1;

        int n = nums.size();


        for(int i = n-2; i >= 0; i--){

            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }

        }

        if(index == -1){
            reverse(nums.begin() , nums.end());
        }

        for(int i = n-1; i > index; i--){

            if(nums[i] > nums[index]){
                swap(nums[i] , nums[index]);
                break;
            }

    }
    
    reverse(nums.begin()+index+1 , nums.end());
        
    }


int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    
    nextPermutation(arr);
    
    for(int i = 0; i < arr.size(); i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}