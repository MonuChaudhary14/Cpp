#include <iostream>
#include <cctype> // Include the cctype library

using namespace std;

int main()
{
    char t;
    cout<<"Enter a letter"<<endl;
    cin >> t;

    if (isupper(t)) // Check if uppercase
        cout << "UPPER"<<endl;
    else if (islower(t)) // Check if lowercase
        cout << "LOWER"<<endl;
    else
        cout << "ERROR"<<endl;

    return 0;
}
