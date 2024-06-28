#include <iostream>
#include <fstream>
#include <string> /*To use getline*/
// The useful classes for working with files in c++ are:
// 1.fstreambase
// 2.ifstream --> derived from fstreambase
// 3.ofstream --> derived from fstreambase

// In order to work with files in c++, you will have to open it.
// Primarly, there are two ways to open a file:
// 1.Using the constructor
// 2.Using the member function() of the class
using namespace std;

int main()
{
    // string st = "Monu";
    // // Opening files using constructor and writing it

    // ofstream out("sample.txt"); /*out is an object*/ /*This help in writing in sample.txt*/
    // out << st;

    // Opening file using constructor and reading it
    ifstream in("sample.txt"); /*Read operation*/
    string st2;
    getline(in, st2);
    in >> st2;
    // getline(in , st2);  If i use getline here then it show the second word to get the whole line use it above in>>st2;

    cout << st2;

    return 0;
}