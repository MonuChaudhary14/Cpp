#include <iostream>
#include<queue>
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

node * insertintoBST(node * root , int data){

    //base case
    if(root == NULL){
        root = new node(data);
        return root;
    }

    if(data > root->data){
        //insert in right part
        root->right = insertintoBST(root->right , data);
    }

    else{
        //insert in right part
        root->left = insertintoBST(root->left , data);
    }

    return root;

}

void levelordertraversal(node * root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);   /*it is a seperator because in this case level 0 is completed*/

    while(!q.empty()){

        node * temp = q.front();
        q.pop();

        if(temp == NULL){  /*it means previous level is completely transversed*/

            cout<<endl;
            if(!q.empty()){     /*queue still have some parent child nodes*/
                q.push(NULL);
            }
        }

        else{
        cout<<temp->data<<" ";
        if(temp ->left ){
            q.push(temp->left);
        }

        if(temp ->right){
            q.push(temp->right);
        }
        }

    }

} /*we can also use inorder , preorder , postorder traversal . Inorder of BST is sorted*/

void takeinput(node *&root){

    int data;
    cin>>data;

    while(data != -1){

        root = insertintoBST(root , data);
        cin>>data;

    }

}

node * minval(node * root){

    node * temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

node * maxval(node * root){

    node * temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

node * deletefromBST(node * root , int val){

    //base case
    if(root == NULL){
        return root;
    }

    if(root->data == val){

        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child

        //left child
        if(root->left != NULL && root->right == NULL){
            node * temp = root->left;
            delete root;
            return temp;
        }

        //right child
        else if(root ->left == NULL && root->right != NULL){
            node * temp = root->right;
            delete root;
            return temp;
        }  


        //2 child

        if(root->left != NULL && root->right != NULL){

            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deletefromBST(root->right , mini);
            return root;

            /*Can also use this method
            
            int max = maxval(root->left)->data;
            root->data = max;
            root->left = deletefromBST(root->left , max);
            return root;
            
            */

        }

    }

    else if(root->data > val){
        //left part 
        root->left = deletefromBST(root->right , val);
        return root;
    }
    else{
        root->right = deletefromBST(root->right , val);
        return root;
    }

}

int main()
{

    node * root = NULL;

    cout<<"Enter the data to create BST"<<endl;

    takeinput(root);

    levelordertraversal(root);

    return 0;
}