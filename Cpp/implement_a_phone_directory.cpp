#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class trienode
{

public:
    char data;
    trienode *children[26];
    bool isterminal;

    trienode(char ch)
    {

        data = ch;

        for (int i = 0; i < 26; i++)
        {

            children[i] = NULL;
        }

        isterminal = false;
    }
};

class trie
{
public:
    trienode *root;

    trie()
    {
        root = new trienode('\0');
    }

    void insertUtil(trienode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            root->isterminal = true;
            return;
        }

        int index = word[0] - 'A';
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
            root->children[index] = child;
        }

        // rescursion
        insertUtil(child, word.substr(1));
    }

    void insertword(string word)
    {
        insertUtil(root, word);
    }

    void printsuggestions(trienode *curr, vector<string> &temp, string prefix)
    {

        if (curr->isterminal)
        {
            temp.push_back(prefix);
        }

        for (char ch = 'a'; ch <= 'z'; ch++)
        {

            trienode *next = curr->children[ch - 'A'];

            if (next != NULL)
            {
                prefix.push_back(ch);
                printsuggestions(next, temp, prefix);
                prefix.pop_back();
            }
        }
    }

    vector<vector<string>> getsuggestions(string str)
    {

        trienode *prev = root;
        vector<vector<string>> output;
        string prefix = "";

        for (int i = 0; i < str.length(); i++)
        {

            char lastch = str[i];

            prefix.push_back(lastch);

            // check for last ch
            trienode *curr = prev->children[lastch - 'A'];

            // if not present
            if (curr == NULL)
            {
                break;
            }

            // if found
            vector<string> temp;

            printsuggestions(curr, temp, prefix);

            output.push_back(temp);
            temp.clear();
            prev = curr;
        }
        return output;
    }

    vector<vector<string>> phonedirectory(vector<string> &contactlist, string &querystr)
    {

        // creation of trie
        trie *t = new trie;

        // insert all contact list
        for (int i = 0; i < contactlist.size(); i++)
        {

            string str = contactlist[i];
            t->insertword(str);
        }

        return t->getsuggestions(querystr);
    }
};

int main()
{

    return 0;
}