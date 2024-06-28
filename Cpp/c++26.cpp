#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The id of this item is " << id << " and the price of this item is " << price << endl;
    }
};

int main()
{
    int p;
    float q;
    int size = 3;
    // int *ptr = &size;  No need
    // int *ptr = new int[56];      This means it create memory of 56 items
    shop *ptr = new shop[size]; /*We can directly give value to size in the bracket without using size*/
    shop *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout << "Item no. " << j + 1 << endl;
        ptrTemp->getdata();
        ptrTemp++;
    }

    // for (int j = 0; j < size ; j++){       /*This show data in descending order*/
    // ptr--;
    // ptr->getdata();
    // }

    return 0;
}