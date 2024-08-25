#include<iostream>
using namespace std;

string removeoccurences(string s, string part){

    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part) , part.length());
    }
    return s;
}

int main(){
    string s = "abdbjsajcbdjc";
    string s1 = "dbj";

    cout<<removeoccurences(s, s1);
    
    return 0;
}