#include <iostream>
#include<stack>
using namespace std;

bool isredundant(string &s){

    stack<char> stack;

    for(int i = 0; i < s.length(); i++){

        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*'){
            stack.push(ch);
        }


        else{

            if(ch == ')'){
                bool redundant = true;


            while(stack.top() != '('){
                char top = stack.top();

                if(top == '+' ||top == '-' ||top == '/' ||top == '*'){

                    redundant = false;

                }
                stack.pop();
            }

            if(redundant == true){
                return true;
                stack.pop();
            }

            }


        }

    }
    return false;

}

int main()
{

    return 0;
}