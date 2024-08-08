#include <iostream>
#include <vector>
using namespace std;

void solve(string digit, string output, int index, vector<string> &ans, string mapping[])
{

    // base class
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digit[index] - '0'; /*it is used because digit[index] give a character like '2' */
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

vector<string> lettercombination(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
    {
        return ans;
    }
    string output;
    int index = 0;
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
}

int main()
{
    // int n;
    // cin >> n;
    string s; 
    cin>>s;

    lettercombination(s);

    cout<<s;

    return 0;
}