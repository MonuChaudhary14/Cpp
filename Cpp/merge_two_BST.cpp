#include <iostream>
#include<vector>
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

void inorder(node * root , vector<int> &in){

    if(root == NULL){
        return ;
    }

    inorder(root->left , in);
    in.push_back(root->data);
    inorder(root->right , in);

}

vector<int> mergearray(vector<int> &a , vector<int> &b){

    vector<int> ans(a.size() + b.size());

    int i = 0;
    int j = 0;
    int k= 0;

    while(i < a.size() && j < b.size()){

        if(a[i] < b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[i];
            i++;
        }
    }

    while(i < a.size()){
        ans[k++] = a[i];
        i++;
    }

    while(j < a.size()){

        ans[k++] = b[i];
        i++;
    }
    return ans;
}

node * inorderBST(int s , int e , vector<int> &in){

    //base case
    if(s < e){
        return NULL;
    }

    int mid = (s+e)/2;

    node * root = new node(in[mid]);

    root->left = inorderBST(s , mid-1 , in);
    root->right = inorderBST(mid+1 , e , in);

    return root;
}

node * mergeBST(node * root1 , node * root2){

vector<int> bst1 , bst2;

//store array
inorder(root1 , bst1);
inorder(root2 , bst2);

//merging array
vector<int> mergearrays = mergearray(bst1 , bst2);


//using merge array to make a BST
    int s = 0;
    int e = mergearrays.size()-1;

    return inorderBST(s ,e , mergearrays);


}

//Another Method
//In this method we create a doubly linked list from a BST and merge two doubly linked list and then again create a BST from doubly linked list

void convertintoDD(node * root , node * &head){

    //base case
    if(root == NULL){
        return ;
    }

    convertintoDD(root->right ,head);

    root->right = head;

    if(head != NULL){
        head->left = root;
    }

    head = root;

    convertintoDD(root->left , head);
}

node* mergeDD(node * head1 , node * head2){

    node * head = NULL;
    node * tail = NULL;

    while(head1 != NULL && head2 != NULL){

        if(head1->data < head2->data){

            if(head == NULL){
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }

        else{

            if(head == NULL){

                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }

        }


    }

    while(head != NULL){  
         tail->right = head1;
         head1->left = tail;
        tail = head1;
        head1 = head1->right;
        
    }

    while(head2 != NULL){
           tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
    }
    return head;
}

int length(node * head){

    node * temp = head;

    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp->right;
    }
    return count;
}

node * converttoBST(node * &head , int n){

    //base case
    if(n <= 0 || head == NULL){
        return NULL;
    }

    node * left = converttoBST(head , n/2);

    node * root = head;

    root->left = left;

    head = head->right;

    root->right = converttoBST(head , n - (n/2) - 1);
    return root;

}

node * merge(node * root1 ,node * root2){

    node * head1 = NULL;
    convertintoDD(root1 , head1);
    head1->left = NULL;

    node * head2 = NULL;
    convertintoDD(root2, head2);
    head2->left = NULL;

    node * temp = mergeDD(head1 , head2);

    return converttoBST(temp , length(temp));
}

int main()
{

    return 0;
}