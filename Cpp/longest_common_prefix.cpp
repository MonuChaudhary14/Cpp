#include <iostream>
#include <vector>
using namespace std;

string prefix(vector<string> &arr, int n)
{

    string ans = "";

    // traversing all characters of first string
    for (int i = 0; i < arr[0].length(); i++)
    {

        char ch = arr[0][i];

        bool match = true;

        // for compairing ch with rest

        for (int j = 1; j < n; j++)
        {

            // not match

            if (arr[j].size() < i || ch != arr[j][i])
            {
                match = false;
                break;
            }
        }
        if (match == false)
        {
            break;
        }
        else
        {
            ans.push_back(ch);
        }
    }
    return ans;
}

// another method

class trienode
{

public:
    char data;
    trienode *children[26];
    int childcount;
    bool isterminal;

    trienode(char ch)
    {

        data = ch;

        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        childcount = 0;
        isterminal = false;
    }
};

class trie
{

public:
    trienode *root;

    trie(char ch)
    {
        root = new trienode(ch);
    }

    void insertUtil(trienode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            root->isterminal = true;
            return;
        }

        int index = word[0] - 'a';
        trienode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new trienode(word[0]);
            root->childcount++;
            root->children[index] = child;
        }

        // rescursion
        insertUtil(child, word.substr(1));
    }

    void insertword(string word)
    {
        insertUtil(root, word);
    }

    void lcp(string str, string &ans)
    {

        for (int i = 0; i < str.length(); i++)
        {

            char ch = str[i];

            if (root->childcount == 1)
            {
                ans.push_back(ch);
                // move forward
                int index = ch - 'a';
                root = root->children[index];
            }
            else
            {
                break;
            }

            if (root->isterminal)
            {
                break;
            }
        }
    }
};

string longestprefix(vector<string> &arr, int n)
{

    trie *t = new trie('\0');

    // insert all strings into trie

    for (int i = 0; i < n; i++)
    {
        t->insertword(arr[i]);
    }
}

int main()
{

    return 0;
}