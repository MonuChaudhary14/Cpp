#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = 1;

    for(int i = 1; i <= n ; i++){

        for (int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        for (int k = 1; k <= i ; k++){
            cout<<a;
        }
        a++;
        cout<<endl;
    }
    cout<<endl;

    int n1;
    cin>>n1;
    int b = 1;

    for(int i = 1; i <= n1 ; i++){

        for (int j = 1; j <= i; j++){
            cout<<" ";
        }
        for (int k = 1; k <= n-i+1; k++){
            cout<<b;
            b++;
        }
        for(int l = 1; l <= n-i; l++){
            b--;
        }
        cout<<endl;
    }

    int n3;
    cin>>n3;
    int c = 1;

    for(int i = 1; i <= n3 ; i++){

        for (int j = 1; j <= n-i; j++){
            cout<<" ";
        }
        for (int k = 1; k <= i; k++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }



    return 0;
}