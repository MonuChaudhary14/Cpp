#include <iostream>
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

bool isindentical(node * r1 , node * r2){

    if(r1 == NULL && r2 == NULL){
        return true;
    }
    if(r1 == NULL && r2 != NULL){
        return false;
    }
    if(r2 == NULL && r1 != NULL){
        return false;
    }

    bool left = isindentical(r1->left , r2->left);
    bool right = isindentical(r1->right , r2->right);

    bool value = r1->data == r2->data;

    if(left && right && value){
        return true;
    }
    else{
        return false;
    }


}

int main()
{

    return 0;
}