#include <iostream>
using namespace std;

bool valid(char ch)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char lowercase(char ch)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(string a)
{
    int start = 0;
    int end = a.length() - 1;

    for (int i = 0; start <= end; i++)
    {

        if (lowercase(a[start]) != lowercase(a[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

bool ispalidrome(string s)
{
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {

        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = lowercase(temp[j]);
    }
    return checkpalindrome(temp);
}

int main()
{
    string s;

    s = "Noon";

    cout << ispalidrome(s);

    return 0;
}