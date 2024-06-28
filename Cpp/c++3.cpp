#include <iostream>
using namespace std;

struct employee /*If we use typedef in the beginning then we can directly give names*/
{
    int ID;
    char favChar;
    float salary;
};

typedef struct user
{
    int id;
    char favletter;
    float code;
} ep;

union money
{
    int rice;
    char car;
    float rupee;
};

int main()
{
    struct employee monu;
    struct employee ketan;
    struct employee prachi;

    monu.ID = 14022006;
    monu.favChar = 's';
    monu.salary = 10000000;
    ketan.ID = 11032001;
    cout << "This is the Id of Monu " << monu.ID << endl;
    cout << "This is the salary of Monu is " << monu.salary << endl;
    cout << "This is the Id of ketan " << ketan.ID << endl;

    ep sanjay;
    sanjay.id = 1000;
    sanjay.favletter = 'a';
    sanjay.code = 10.1;

    cout << "This is the code of sanjay " << sanjay.code << endl;

    // Union --> This is used to share memory
    union money m1;
    {
        m1.rice = 45; /*Doubt Video no.14*/
        m1.car = 'g';
        m1.rupee = 50.2;

        cout << m1.rice << endl;
        cout << m1.rupee << endl;
    };

    enum Meal
    {
        Breakfast,
        Lunch,
        dinner
    };
    Meal m1 = Lunch;
    /*We can also use breakfast and dinner in place of lunch*/
    //    cout<<m1<<endl;
    //    cout<<(m1 == 0);        /*This is true if we use m1==1 then the output will be 0. Check the c1 method in video no.14*/
    cout << Breakfast << endl;
    cout << Lunch << endl;
    cout << dinner << endl;

    return 0;
}