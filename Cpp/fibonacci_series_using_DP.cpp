#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){   /*top down method*/

    vector<int> ans(n+1 , -1);

    if(n <= 1){
        return n;
    }

    if(ans[n] != -1){
        return ans[n];
    }

    ans[n] = fibonacci(n-1) + fibonacci(n-2);

    return ans[n];

}

int fibonacciseries(int n){   /*bottom up method*/

    vector<int> ans(n+1 , -1);

    ans[0] = 0;
    ans[1] = 1;

    for(int i = 2; i <= n; i++){
        ans[i] = ans[i-1] + ans[i-2];
    }
    return ans[n];
}

//space optimisation
int fib(int n){

    if(n == 0){
        return 0;   
    }

    int prev1 = 1;
    int prev2 = 0;

    for(int i = 2; i <= n; i++){

        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;


    }
    return prev1;
}

int main()
{
    int n = 6;

    cout<<fibonacci(n);
    cout<<endl;
    cout<<fibonacciseries(n);
    cout<<endl;  
    cout<<fib(n);

    return 0;
}