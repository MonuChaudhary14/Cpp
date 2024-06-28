#include <iostream>
#include <fstream>
#include <string> /*To use getline*/
using namespace std;

int main()
{
    // Connection our file with mout string
    // ofstream mout("sample2.txt");

    // Creating a name string and filling it with the string entered by the user
    // cout<<"Enter your name ";
    // string name;
    // cin>>name;
    // // Writing a string to the file
    // mout<<"My name is " + name;

    // mout.close();  /*Now this work is done and we didn't want to work it with further and the link is broken*/

    // ifstream min("sample2.txt");
    // string content;
    // getline(min , content);
    // min>>content;
    // cout<<"The content of this file is "<<content;
    // min.close();

    ofstream out;
    out.open("sample2.txt");
    out << "This is me" << endl;
    out << "Change it again" << endl;
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample2.txt");
    // in>>st>>st2;     This is used to bring the object from the file one by one, if two of them is given then it show two words
    // cout<<st<<st2;
    /*For getting whole data use will use loop*/

    // Imp- if we use getline two times but we give both of them same string then it show second line

    while (in.eof() == 0)
    {                    /*eof means end of file*/
        getline(in, st); /*To use this we have to include string*/
        // There is no need to include in<<s;
        cout << st << endl;
    }
    in.close();

    return 0;
}