#include <iostream>
using namespace std;

bool search(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 4, 8, 6, 9};

    cout << "Enter the element to search ";
    int element;
    cin >> element;

    bool found = search(arr, 6, element);

    if (found)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;
}