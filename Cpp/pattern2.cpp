#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    int n1 = 4;
    cin >> n1;
    for (int i = 1; i <= n1; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout <<i;
        }
        cout << endl;
    }

    cout << endl;
    int g = 1;
    int n2 = 4;
    cin >> n2;
    for (int i = 1; i <= n2; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout <<g;
            g++;
        }
        cout << endl;
    }

    int n3;
    cin>>n3;
    for (int i = 1; i <= n3 ; i++){
        
        int h = i;
        for (int k = 1; k <= i ; k++){
            cout<<h;
            h++;
        }
        cout<<endl;
    }// Try by another method



    return 0;
}