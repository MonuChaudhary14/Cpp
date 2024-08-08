#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

bool search(node * root ,int x){

    //base case
    if(root == NULL){
        return false;
    }

    if(root->data == x){
        return true;
    }

    if(root->data > x){
        //left part
        return search(root->left , x);
    }
    else{
        //right part
        return search(root->right , x);
    }
    /*In this case time complexity is o(logn) but in worst case it is o(n) like when we have a single line tree*/
}

/*Another method in which space complexity become o(1)

    bool search(node * root , int x){
    node * temp = root;

    while(temp != NULL)
    //base case

    if(temp->data == x){
    return true;
    }

    if(temp->data < x){
        temp = temp->left;
    }

    else{
    temp = temp->right;
    }
    return false;
    }

*/

int main()
{

    return 0;
}