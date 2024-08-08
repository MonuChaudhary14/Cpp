#include <bits/stdc++.h>
using namespace std;

class trienode{

    public:
    char data;
    trienode * children[26];
    bool isterminal;

    trienode(char ch){

        data = ch;

        for(int i = 0; i < 26; i++){

        children[i] = NULL;
        }

        isterminal = false;
    }

};

class trie{
    public:
    trienode * root;

    trie(){
        root = new trienode('\0');
    }

    void insertUtil(trienode * root , string word){

        //base case
        if(word.length() == 0){
            root->isterminal = true;
            return ;
        }

        int index = word[0] - 'A';
        trienode * child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new trienode(word[0]);
            root->children[index] = child;
        }

        //rescursion 
        insertUtil(child, word.substr(1));

    }

    void insertword(string word){
    insertUtil(root , word);
    }

    bool search(trienode * root , string word){

        //base case
        if(word.length() == 0){
            return root->isterminal;
        }

        int index = word[0] - 'A';
        trienode * child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        return search(child , word.substr(1));

    }


    bool prefixsearch(trienode * root , string word){

        //base case
        if(word.length() == 0){
            return true;
        }

        int index = word[0] - 'A';
        trienode * child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        return search(child , word.substr(1));

    }
};



int main()
{
    trie * t = new trie();
    t->insertword("ASD");
    t->insertword("ERR");
    t->insertword("MGH");

    // cout<<"Present or not "<<t->search(tr , "ASD")<<endl;

    return 0;
}