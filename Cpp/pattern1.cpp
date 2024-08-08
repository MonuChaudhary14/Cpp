#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n ; j++){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<endl;

    int n1;
    cin>>n1;

    for (int k = 0; k < n1; k++){
        for (int a = 1 ; a <= n1 ; a++){
            cout<<n1-a+1;
        }
        cout<<endl;
    }

    cout<<endl;

    int n2;
    cin>>n2;

    int i = 1;
    int g = 1;
    

    while (i <= n2){

        int j = 1;
        while(j <= n2){
            cout <<g;
            g++;
            j++;
        }
        cout<<endl;
        i++;
    }





    return 0;
}