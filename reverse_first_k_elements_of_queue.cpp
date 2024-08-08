#include <iostream>
#include<queue>
#include<stack>
using namespace std;

queue<int> modifyqueue(queue<int> q, int k){

    //pop first k from q and put into stack
    stack<int> s;

    for(int i = 0; i < k ; i++){

        int val = q.front();
        q.pop();
        s.push(val);
    }

    //fetch from stack and push into q

    while(!s.empty()){

        int val = s.top();
        s.pop();
        q.push(val);
    }

    //fetch first n-k element fromt the queue and pushback

    int t = q.size()-k;

    while(t--){

        int val = q.front();
        q.pop();
        q.push(val);

    }
    return q;
}

int main()
{

    return 0;
}