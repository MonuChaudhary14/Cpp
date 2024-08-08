#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> s1;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        s1.push(ch);
    }

    string ans = "";

    while (!s1.empty())
    {

        char c = s1.top();
        ans.push_back(c);

        s1.pop();
    }

    cout <<"The reverse is "<< ans;

    return 0;
}