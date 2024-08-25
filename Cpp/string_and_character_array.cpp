#include <iostream>
using namespace std;

int getlength(char ch[])
{
    int count = 0;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[], int n)
{
    {
        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            swap(name[start], name[end]);
            start++;
            end--;
        }
    }
}

int main()
{
    char name[10]; /*Only that space is filled which contain an character in it if we do not give 10 length character name then it create null character at that place*/

    cin >> name;          /*If we give space, enter or tab in this input then it take only first word*/
    cout << name << endl; /*because a null character(\0) is created at that place*/

    // name[2] = 'C';
    // name[3] = '\0'; /*we can also change the value of any character at any place*/

    cout << getlength(name);

    cout << endl;

    char c[6] = "abcde"; /*If we want to make a character array of length 5 then we have to give it 6 because it take a null character*/
    cout << c;           /*If we give this it print the entire character array which is different form the other data types array because in them it give address of first block in array*/
    /*even if we give a pointer it show the whole string or character array*/


    reverse(name, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << name[i];
    }

    return 0;
}

// Members of string:

// string s;
// 1.Length-> s.length();
// 2.pushback-> s.push_back('character');
// 3.popback-> s.pop_back();