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

int diameter(node * d){

    //base case
    if(d == NULL){
        return 0;
    }

    int o1 = diameter(d->left);
    int o2 = diameter(d->right);
    int o3 = height(d->left) + height(d->right)+1;

    int ans = max(o1 , max(o2 , o3));
    return ans;
}

//Another method

pair<int , int> diameterandheight(node * root){

    //base class
    if(root == NULL){
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int ,int> left = diameterandheight(root->left);
    pair<int ,int> right = diameterandheight(root->right);

    int o1 = left.first;
    int o2 = right.first;
    int o3 = left.second + right.second + 1;

    pair<int , int> ans;
    ans.first = max(o1 , max(o2 ,o3));
    ans.second = max(left.second , right.second) + 1;

    return ans;
}

int dia(node * root){

    return diameterandheight(root).first;
}

int main()
{

    return 0;
}