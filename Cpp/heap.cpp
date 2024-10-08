#include <iostream>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;

        arr[index] = val;

        while (index > 1)
        {

            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }


    void printheap(heap h)
    {

    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    }


    void deletefromheap(){

        if(size == 0){
            cout<<"Heap is empty";
            return ;
        }

        arr[1] = arr[size];
        size--;

        //take root node to its correct position
        int i = 1;

        while(i < size){

            int leftindex = 2*i;
            int rightindex = 2*i+1;

            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i] , arr[leftindex]);
            }
            else if(rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i] , arr[leftindex]);
                i = leftindex;
            }
            else{
                return ;
            }
        }
    }

    };

    void heapify(int arr[] , int n , int i){

        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left <= n && arr[largest] < arr[left]){
            largest = left;
        }

        if(right <= n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr , n , largest);
        }


    }

int main()
{
    heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.printheap(h);

    cout<<endl<<"after deletion: ";
    h.deletefromheap();
    h.printheap(h);

    int arr[6] = {-1 , 54 , 53, 55, 52, 50};

    int n = 5;
 
    for(int i = n/2; i > 0; i--){

        heapify(arr , n , i);
    }

    cout<<endl;

    cout<<"Printing the array now"<<endl;

    for(int i = 1   ;i <= n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}