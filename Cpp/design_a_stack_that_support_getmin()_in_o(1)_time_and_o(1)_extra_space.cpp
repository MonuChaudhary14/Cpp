#include <iostream>
#include<stack>
using namespace std;

class Stack{

    stack<int> s;
    int mini;

    public:

    void push(int data){

        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{

            if(data < mini){
                s.push(2*data - mini);
                mini = data;
            }
            else{
                s.push(data);
            }

        }

    }

    int pop(){

        if(s.empty()){
            return -1;
        }

        int curr = s.top();
        s.pop();

        if(curr > mini){
            return curr;
        }
        else{
            int prevMinimum = mini;
            int val = 2* mini - curr;
            mini = val;
            return prevMinimum;
        }

    }

    int top(){

        if(s.empty()){
            return -1;
        }

        int curr = s.top();

        if(curr < mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    bool isempty(){
        return s.empty();
    }

    int getmin(){

        if(s.empty()){
            return -1;
        }
        return mini;
    }

};



int main()
{

    return 0;
}