#include <iostream>
using namespace std;

class deque
{

    int *arr;
    int front;
    int rear;
    int size;

public:
    deque(int n)
    {

        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool isfull()
    {

        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isempty()
    {

        if (front == -1)
        {
            return true;
        }
        return false;
    }

    bool pushfront(int x)
    {

        // check full or not

        if (isfull())
        {
            return false;
        }
        else if (isempty())
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool pushrear(int x)
    {

        // check full or not

        if (isfull())
        {
            return false;
        }
        else if (isempty())
        {
            front = rear = 0;
        }
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    int popfront()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;

        if (front == rear)
        { // Single element
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }

    int poprear()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;

        if (front == rear)
        { // Single element
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
            ;
        }
        else
        {
            rear--;
        }
        return ans;
    }

    int getfront()
    {

        if (isempty())
        {
            return -1;
        }
        return arr[front];
    }

    int getrear()
    {

        if (isempty())
        {
            return -1;
        }
        return arr[rear];
    }
};

int main()
{

    return 0;
}