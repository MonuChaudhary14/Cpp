#include <iostream>
#include<cmath>
using namespace std;

class node{
     public:
    int data;
    node * left;
    node * right;
   

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

int height(node * h){

//base case
if(h == NULL){
    return ;
}

int left = height(h->left);
int right = height(h->right);

int ans = max(left , right);

return ans+1;

}

int main()
{

    return 0;
}