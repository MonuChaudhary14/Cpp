// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverse(string &s, int begin, int end)
{
    while (begin < end)
    {
        swap(s[begin++], s[end--]);
    }
}

void reverseWords(string &s)
{
    int word_begin = -1;
    int i = 0;
    while (i < s.size())
    {
        if ((word_begin == -1) && (s[i] != ' '))
        {
            word_begin = i;
        }
        if (word_begin != -1 && ((s[i + 1] == ' ') || (i + 1 == s.size())))
        {
            reverse(s, word_begin, i);
            word_begin = -1;
        }
        i++;
    }
    reverse(s, 0, s.size() - 1);
}

int main()
{
    string s = "i like this program very much";
    reverseWords(s);
    cout << s << endl;
    return 0;
}
