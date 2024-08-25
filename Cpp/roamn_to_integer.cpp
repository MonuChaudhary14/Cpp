#include <iostream>
using namespace std;

int convert(char ch)
{

    if (ch == 'I')
    {
        return 1;
    }
    else if (ch == 'V')
    {
        return 5;
    }
    else if (ch == 'X')
    {
        return 10;
    }
    else if (ch == 'L')
    {
        return 50;
    }
    else if (ch == 'C')
    {
        return 100;
    }
    else if (ch == 'D')
    {
        return 500;
    }
    else if (ch == 'M')
    {
        return 1000;
    }
    else
    {
        return 0;
    }
}

int romanToInt(string s)
{
    int ans = 0;

    for (int i = 0; i < s.length(); i+1)
    {

    int curr = convert(s[i]);
    int next;
    if(i + 1 < s.length()){
    next = convert(s[i+1]);
    }
    else{
        next = 0;
    }

    if(curr < next){
        ans = next - curr + ans;
        i++;  //To leave a case
    }
    else{
        ans = ans + curr;
    }
    }
    return ans;
}

int main()
{

    string s;
    cin >> s;

    cout << romanToInt(s);

    return 0;
}