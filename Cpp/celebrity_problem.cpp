#include <iostream>
#include<stack>
#include<vector>
using namespace std;

bool knows(vector<vector<int>> &M , int a , int b , int n){

    if(M[a][b] == 1){
        return true;
    }
    else{
        return false;
    }

}

int celebrity(vector<vector<int>> &M , int n){

    stack<int> s;

    for(int i = 0; i < n; i++){
        s.push(i);
    }

    while(s.size() > 1){

        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if(knows(M , a, b , n)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }


    // Single element in stack is potential celebrity
    int candidate = s.top();
    int zerocount = 0;

    for(int i = 0; i < n; i++){

        if(M[candidate][i] == 1){
                zerocount++;
        }
    }

        if(zerocount != n){
            return -1;
        }
    

    // column check

        int onecount = 0;

        for(int i = 0; i < n; i++){

        if(M[i][candidate] == 1){
                onecount++;
        }
        }

        if(onecount != n-1){
            return -1;
        }

        return candidate;

        }

    


int main()
{

    return 0;
}