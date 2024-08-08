#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

int getlength(node *&head)
{
    int count = 0;
    node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertathead(node *&head, int d)
{
    // Creating a new node
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void bubbleSort(node *&head)
{
    int length = getlength(head);

    for (int i = 0; i < length - 1; i++)
    {
        node *curr = head;
        node *prev = NULL;

        while (curr->next != NULL)
        {
            if (curr->data < curr->next->data)
            {
                // Swap data
                int temp = curr->data;
                curr->data = curr->next->data;
                curr->next->data = temp;
            }

            prev = curr;
            curr = curr->next;
        }
    }
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;

    insertathead(head, 20);
    insertathead(head, 89);
    insertathead(head, 2);
    insertathead(head, 10);

    bubbleSort(head);

    cout << "Sorted list: ";
    print(head);

    return 0;
}
