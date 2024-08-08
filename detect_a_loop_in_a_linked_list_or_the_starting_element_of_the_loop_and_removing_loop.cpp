#include <iostream>
#include <map>
using namespace std;

class node
{
public:
    int data;
    node *nextaddress;

    node(int d)
    {
        this->data = d;
        this->nextaddress = NULL;
    }

    ~node()
    {
        if (this->nextaddress != NULL)
        {
            delete nextaddress;
            nextaddress = NULL;
        }
        cout << "Memory is free for node with data " << data << endl;
    }
};

void insertnode(node *&tail, int element, int d)
{

    // empty list
    if (tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        newnode->nextaddress = newnode;
    }
    else
    {
        // assuming that the element is present in the list

        node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->nextaddress;
        }

        node *temp = new node(d);
        temp->nextaddress = curr->nextaddress;
        curr->nextaddress = temp;
    }
}

void print(node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
    }

    node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->nextaddress;
    } while (tail != temp);
    cout << endl;
}

void deletenode(node *&tail, int value)
{

    if (tail == NULL)
    {
        cout << "Error";
        return;
    }

    node *prev = tail;
    node *curr = prev->nextaddress;

    while (curr->data != value)
    {
        prev = curr;
        curr = curr->nextaddress;
    }
    prev->nextaddress = curr->nextaddress;

    if (curr == prev)
    {
        tail = NULL;
    }
    else if (tail == curr)
    {
        tail = prev;
    }
    curr->nextaddress = NULL;
    delete curr;
}

bool detectloop(node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<node *, bool> visited;

    node *temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Present on element " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->nextaddress;
    }
    return false;
}

// Floyd's cycle loop

node *floyddetectloop(node *head)
{

    if (head == NULL)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->nextaddress;
        if (fast != NULL)
        {
            fast = fast->nextaddress;
        }

        slow = slow->nextaddress;

        if (slow == fast)
        {
            cout << "Cycle is present at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

// Method to get starting point of a loop when using floyd's detect loop method

node *getstartingnode(node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    node *intersection = floyddetectloop(head);

    if (intersection == NULL)
    {
        return NULL;
    }

    node *slow = head;

    while (slow != intersection)
    {
        slow = slow->nextaddress;
        intersection = intersection->nextaddress;
    }
    return slow;
}

node * removeloop(node *head)
{

    if (head == NULL)
    {
        return NULL;
    }

    node *startofloop = getstartingnode(head);

    if(startofloop == NULL){
        return head;
    }

    node *temp = startofloop;

    while (temp->nextaddress != startofloop)
    {
        temp = temp->nextaddress;
    }
    temp->nextaddress = NULL;
    return head;
}

int main()
{

    node *tail = NULL;

    insertnode(tail, 5, 3);
    print(tail);

    insertnode(tail, 3, 6);
    print(tail);

    insertnode(tail, 6, 7);
    print(tail);

    insertnode(tail, 3, 9);
    print(tail);

    if (detectloop(tail))
    {
        cout << "Loop present" << endl;
    }
    else
    {
        cout << "Loop not present" << endl;
    }

    if (floyddetectloop(tail) != NULL)
    {
        cout << "loop is present" << endl;
    }
    else
    {
        cout << "No loop is present" << endl;
    }

    cout << "The starting point of the loop is " << getstartingnode(tail)->data << endl;

    removeloop(tail);

    if (detectloop(tail))
    {
        cout << "Loop present" << endl;
    }
    else
    {
        cout << "Loop not present" << endl;
    }

    return 0;
}