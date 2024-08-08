#include <iostream>
#include<queue>
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

node * binarytree(node * root){

    int data;
    cout<<"Enter the value of data"<<endl;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"left"<<endl;

    root->left = binarytree(root->left);


    cout<<"right"<<endl;

    root->right = binarytree(root->right);

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

}

void inorder(node * root){

    //base case
    if(root == NULL){
        return ;
    }

    inorder(root->left);    //L
    cout<<root->data<<" ";  //N
    inorder(root->right);   //R

}

void preorder(node * root){

    //base case 
    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}


void postorder(node * root){

    //base case 
    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void  buildfromlevelorder(node *&root){

    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        node * temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }

    }
}

int main()
{

    node * root = NULL;

    root = binarytree(root);

    levelordertraversal(root);

    cout<<endl;

    cout<<"Inorder traversal: ";
    inorder(root);

    cout<<endl;

    cout<<"Preorder traversal: ";
    preorder(root);

    cout<<endl;

    cout<<"Postoder traversal: ";
    postorder(root);

    cout<<endl;

    cout<<"Build ";
    buildfromlevelorder(root);



    return 0;
}