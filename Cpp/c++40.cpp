#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int/*Must be a data type not a template*/> :: iterator it;         /*We must have to give a iterator a proper data type like int , float*/
    for (it = lst.begin(); it!= lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    // List is a container which is used to store data
    // List is used when we have to do insertion or deletion
    // Array is used when we need faster access

    list<int> list1;         /*This create a list of zero length*/

    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(8);
    list1.push_back(1);
    list1.push_back(6);
    list1.push_back(2);
    list<int> :: iterator iter;
    iter = list1.begin();   /*This points the first element of the list*/

    cout<<*iter<<" ";      /*This gives the first number*/
    iter++;                 /*This push the iter to second position*/
    /*To get the second number we cannot give *iter+1 because this give the value of first iter +1*/
    cout<<*iter<<" ";

    cout<<endl;

    display(list1);


    list1.pop_back();
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(8);    /*It removes all the elements which contain 8*/
    display(list1);
    // Sorting the list
    list1.sort();
    display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);

cout<<endl;

    list<int> list2(3);        /*Empty list of size(3)*/
    list<int> :: iterator iter1;
    iter1 = list2.begin();
    *iter1 = 78;
     iter1++;
    *iter1 = 12;
     iter1++;
    *iter1 = 9;
    display(list2);
    list2.sort();
    display(list2);
    
    cout<<endl;

    list1.merge(list2);
    cout<<"List1 after merging ";
    display(list1);

    
    return 0;
}