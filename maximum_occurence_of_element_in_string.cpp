#include <iostream>
using namespace std;

char occurence(string s){

int arr[26] = {0};

for(int i = 0; i < s.length(); i++){
    char ch = s[i];
    int number = 0;

    if( ch >= 'a' && ch <= 'z'){
        number = ch - 'a';
    }
    else{
        number = ch - 'A';
    }
    arr[number]++;
}
int max1 = -1;
int ans = 0;
for(int i = 0; i < 26; i++){

    if(max1 < arr[i]){
        ans = i;
        max1 = arr[i];
    } 
}
char finalans = ans + 'a';
return finalans;
}

int main()
{

    string s;

    s = "Hello";

    cout<<occurence(s);

    return 0;
}
