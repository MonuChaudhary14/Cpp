#include <iostream>
using namespace std;

void reverse(string &s , int start , int end){
    
    if(start > end){
        return ;
    }
    swap(s[start] , s[end-1]);
    start++;
    end--;
  
    reverse(s , start , end);
}

int main()
{
    string s = "abcde";

    reverse(s , 0 , s.length());

    cout<<s;

    return 0;
}