#include<iostream>
using namespace std;  /*Palindrome is said when the reverse of a stirng is same as the original string*/

char lowercase(char name){     /*To not make it case sensitive we use this*/


        if(name >= 'a' && name <='z'){
            return name;
        }
        else{
            char temp = name - 'A' + 'a';
            return temp;
        }
    }

bool checkpalindrome(char name[] , int n){
    int start = 0;
    int end = n-1;

    for(int i = 0; start <= end; i++){

        if(lowercase(name[start]) != lowercase(name[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}



int getlength(char ch[])
{
    int count = 0;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
 
int main(){

    char name[10];
    cin>>name;

    int length = getlength(name);

    if(checkpalindrome(name , length)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    return 0;
}
