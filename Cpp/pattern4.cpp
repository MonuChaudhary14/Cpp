#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char c = 'A';

    for (int i = 1; i <= n; i++){

        for(int j = 1; j <= n ; j++){
            cout<<c;
            c++;
        }
        cout<<endl;
        c--;
        c--;
    }
    cout<<endl;
    // Another method of above 

    int n1;
    cin>>n1;
   

    for(int i = 1 ; i <= n  ; i++){

        for (int k = 1; k <= n; k++){
            char d = 'A'+ i + k -2;       /*How to think video no.4  Time 32 min*/
            cout<<d;
        }
        cout<<endl;
    }
    cout<<endl;

    int n2;
    cin>>n2;
    char e = 'A';

    for(int i = 1; i <= n; i++){

        for (int j = 1; j <= i; j++){
            cout<<e;   
        }
        e++;
        cout<<endl;
    }
    cout<<endl;

    // Another method of above

    int n3;
    cin>>n3;

    for (int i = 1; i <= n3; i++){

        for (int j = 1; j <=i; j++){  /*Video no. 4 Time - 36 min*/
            char f = 'A'+ i -1;
            cout<<f;
        }
        cout<<endl;
    }








    return 0;
}