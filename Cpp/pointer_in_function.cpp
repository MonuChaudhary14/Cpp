#include <iostream>
using namespace std;

void print(int *p)
{ /*In this a copy of a pointer is created*/
    cout << p << endl;
    cout << *p << endl;

    p = p + 1;
    cout << p << endl;

    *p = *p + 1; /*If we give this the value of p changes changes everywhere after this code because it change the value at that address*/
}

void size(int arr[]){
    cout<<sizeof(arr);   /*This show the size of pointer because when we give a array in a function it goes like pointer*/
}

void update(int ** p){
     p = p + 1;  /*Make no change to outside value;*/

     *p = *p + 1;  /*Make change to the address of first element or we can say that address of single pointer*/

     **p = **p + 1;  /*Make change to the value of i from 5 to 6 */
}

int main()
{
    int value = 5;
    int *p = &value;
    int **p1 = &p;

    print(p);

    cout << *p << endl; /*This does not show 6 because the address is not of p which is changed by the function*/
    cout << p << endl;

    update(p1);

    return 0;
}