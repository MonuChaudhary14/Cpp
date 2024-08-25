#include <iostream>
using namespace std;

void update(int &n){
    cout<<"Before updation ";
    cout<<n<<endl;
    n++;
}

int main()
{
    int a = 15, b = 4;

    if (++a) /*This is the answer in this case*/
    {
        cout << 2 * b;
    }
    else
    {
        cout << ++b;
    }

    cout << endl;

    int n;
    cin >> n;

    int i = 0;
    for (; i < n; i++)
    {
        cout << i << " ";
    }

    // for (;;)
    // {
    //     if (i <= n)
    //     {
    //         cout << i << " ";
    //     }
    //     i++;
    // }


    cout<<endl;

    
    for(int i = 0; i < 3; i++){

        cout<<"hi"<<endl;
        cout<<"hey"<<endl;
        continue;

        cout<<"Nameste"<<endl;
    }

    int e = 1;
    while(e < 1000){

        int age = 10;

        switch(age){

            case 1:{
                cout<<"No"<<endl;
            }
            case 10:
            cout<<"Yes"<<endl;
            exit(0);

            default: 
            cout<<"NOOOO"<<endl;
            
        }

    }

    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl;

    int * p = 0;
    int first = 110;
    *p = first;    /* Do not initilize it with *p just use p = &first*/
    cout<<*p<<endl;

    float f = 12.5;
    float c = 21.5;
    float * ptr = &f;
    (*ptr)++;
    *ptr = c;
    cout<<*ptr<< " " <<f << " "<<c<<endl;

    int d[5] = {12,4,8,7,8};
    int * p = d;
    cout<<p[2]<<endl;

    int e[] = {1,2,4,7,87,5};
    // int * ptr = arr++;   We can update e like this
    cout<<*ptr<<endl;

    int x = 110;
    int * l = &x;
    int ** m = &l;
    int s = (**m)++ + 9;
    cout<<x<<" "<<s<<endl;

    int z = 10;
    cout<<"After updation ";
    cout<<z<<endl;

    return 0;
}