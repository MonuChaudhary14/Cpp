#include<iostream>
using namespace std;

bool palindrome(string s , int start  , int end){
    // int d = s.length();    NO need to use this
    // if(d == 1){
    //     return true;
    // }
    // else if(d == 0){
    //     return false;
    // }
    if(start > end){
        return true;
    }

    if(s[start] != s[end-1]){
        return false;
    }
    else{
        return palindrome(s , start+1 , end-1);
    }

}
 
int main(){
    string s;
    cin>>s;

    if(palindrome(s , 0 , s.length())){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindorme";
    }
    
    return 0;
}