#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> arr, int n, int i)
{

    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

vector<int> mergeheaps(vector<int> &a, vector<int> &b, int n, int m)
{

    // merge both arrays

    vector<int> ans;

    for (auto i : a)
    {
        ans.push_back(i);
    }
    for (auto i : b)
    {
        ans.push_back(i);
    }

    // build heap using merged arry
    int size = ans.size();
    for (int i = size / 2; i > 0; i--)
    {
        heapify(ans, n, i);
    }

    return ans;
}

int main()
{

    return 0;
}