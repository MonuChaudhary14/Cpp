#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << " "; /*This tells that where is that element, due to it double the number*/
    }
    cout << endl;
}

int main()
{
    int element;
    int size; /*We can also make it float*/

    vector<int> vec1; /*Zero length integer vector*/

    cout << "Enter the size of the vector " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to add to this vector ";
        cin >> element;
        vec1.push_back(element); /*Push back --> Add element at the end*/
    }

    // vec1.pop_back(); /*Pop Back --> Delete last element*/
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter , 789);  /*If we want to add another integer then in any position then add + in iter*/
    vec1.insert(iter + 1, 4 /*This space is used to add copies*/, 865);
    display(vec1);

    return 0;
}

// Standard Template Library(STL)

// Used in competitive programming
// It is a libary of generic classes and functions
// STL is used because its a good idea not to reinvent the wheel

// STL is useful in:
// Reuse--> Well tested components
// Time save

// Components of STL:
// 1.Containers--> Container is an object which stores data.They use template classes
// 2.Algorithms-->Set of procedures which we use in process data like searching, sorting , merging. It use template function
// 3.Iterators--> It is an object which points to the elememt in a container. Handled just like pointers

// Types of Containers:
// 1.Sequence Container-->Stores data in linear fashion  like vectors, list , dequeue    for all(A-->B-->C-->D....)    //
// 2.Associative container-->Direct Access like set, multiset , multiple map or dictionary. Help in faster searching , access ,etc..      (Store data in tree like structure)
// 3.Derived container-->Real World modeling like stack, queue , priority queue
// Stack- LIFO
// Queue- FIFO

// When to use which?
// Sequence Container:
// Vector:-
// 1.Fast random access
// 2.Slow insertion and deletion
// 3.Insertion and deletion at the end is fast
// 4.Insertion and deletion at the middle is slow

// List:-
// 1.Slow random access
// 2.Insertion and deletion in end and middle is faster than array

// Associative Container:
// All operations are fast except random access

// Derived Container:
// We have analyse every one means it depends like data structure

// We cannot resize the array but in vector it automatically manage the size