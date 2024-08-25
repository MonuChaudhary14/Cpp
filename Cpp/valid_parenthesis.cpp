#include <iostream>
#include <stack>
using namespace std;

bool isparenthesis(string s)
{

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // for opening bracket

        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {

            if (!st.empty())
            {

                char top = st.top(); /*This takes out the last input element*/

                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop();
                }   
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string s;
    cin >> s;

    if (isparenthesis(s))
    {
        cout << "Valid Parenthesis ";
    }
    else
    {
        cout << "Invalid Parenthesis";
    }

    return 0;
}