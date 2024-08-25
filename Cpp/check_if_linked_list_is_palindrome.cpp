#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        node *next = NULL;
    }
};

bool checkpalindrome(vector<int> arr)
{

    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {

        if (arr[s] != arr[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool convert(node *head)
{

    vector<int> arr;

    node *temp = head;

    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkpalindrome(arr);
}

int main()
{

    return 0;
}