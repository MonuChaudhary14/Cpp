#include <iostream>
using namespace std;

class shop
{
    int itemid[100]; /*This shows that the number of items does not exceed 100*/
    int itemprice[100];
    int counter; /*If we initilize it here then its value will start from zero and goes until the end like in item no.1 it give counter = 1 but when we get result from  getvalue function it give it 4*/

public:
    void initcounter(void) { counter = 0; } /*Must see the colon */  /*This initilize counter = 0*/
    void setprice(void);
    void displayprice(void); 
};

void shop ::setprice(void)
{
    cout << "Enter the id of your item no." << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of the item " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item is " << itemprice[i] << " with id " << itemid[i] << endl;
    }
}

class Employee
{
    int id;
     int count = 0; /*This is shared by all*/
    /*If we do not use static variable , then every object has their count so, the value will become 1 for all and also we have to initilize it with 0*/
    /*A static variable initilize with 0, so there is no need to initilize it*/

public:
    void setdata(void)
    {
        cout << "Enter the id of the employee " << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "The id of the employee is " << id << " of employee no. " << count << endl;
        count++;
    }

    // static void getcount(void) /*Static function is used only to determine static members*/
    // {
    //     cout << "The value of count is " << count << endl;
    // };
};
// int Employee ::count; /*If i want to start number by any value then add count = number but do not add this on static*/
/*Count is the static data member of class employee*/

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice(); /*can also use this in a loop*/
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

    Employee monu, ketan, prachi;
    /*monu.id or monu.count cannot be used because these are private members*/
    monu.setdata();
    monu.getdata();
    // Employee::getcount();

    ketan.setdata();
    ketan.getdata();
    // Employee::getcount();

    prachi.setdata();
    prachi.getdata();
    // Employee::getcount(); 

    return 0;
}