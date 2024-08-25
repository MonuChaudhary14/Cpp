#include <iostream>
using namespace std;

int main()
{
    int a = 15, b = 4;

    if (++a)   /*This is the answer in this case*/
    {
        cout << 2 * b;
    }
    else
    {
        cout << ++b;
    }

    cout<<endl;

    int n;
    cin>>n;

    int i = 0;
    for( ; i < n; i++){
        cout<<i<<" ";
    }


    for(; ;){
        if(i <= n){
            cout<<i<<" ";
        }
        i++;
    }

    

    return 0;
}