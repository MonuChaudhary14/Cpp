#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksmap;
    marksmap["Monu"] = 100;
    marksmap["Ketan"] = 99;
    marksmap["Prachi"] = 99;

    marksmap.insert({{"Harshit", 96}, {"Tushar", 97}});

    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout << "The size is: " << marksmap.size() << endl;
    cout << "The max size is: " << marksmap.max_size() << endl;
    cout << "The empty's return value is: " << marksmap.empty() << endl;

    return 0;
}