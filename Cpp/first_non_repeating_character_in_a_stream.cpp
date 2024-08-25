#include <iostream>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;

string firstnonrepeating(string a){

    unordered_map<char , int> count;
    queue<int> q;
    string ans = "";

    for(int i = 0; i < a.length(); i++){

        char ch = a[i];

        //increase count
        count[ch]++;

        q.push(ch);

        while(!q.empty()){

            if(count[q.front()]>1){
                q.pop();  //repeating character
            }
            else{
                ans.push_back(q.front());
                break;
            }

        }

        if(q.empty()){
            ans.push_back('#');
        }


    }
        return ans;
}

int main()
{

    return 0;
}