#include <iostream>
using namespace std;   /*In this compiler it is showing error but it is correct*/

int lengthOfLastWord(string s)
{
    int count = 0;
    int i = s.length() - 1; // Start from the last character

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    // Count the characters of the last word
    while (i >= 0 && s[i] != ' ')
    {
        count++;
        i--;
    }

    return count;
}

int main()
{
    string s;
    cin>>s;

    cout<<"The length of last word of a string is "<<lengthOfLastWord(s);

    return 0;
}