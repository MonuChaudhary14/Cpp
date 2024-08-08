#include <iostream>
using namespace std;

class solution{
    public:
    int number(uint32_t n){
        int count = 0;

        while(n != 0){
            if(n & 1){
                count++;
            }
            n = n >> 1;
        }
        cout<<count;
        return count;
    }
};
int main()
{
    int n;
    cin>>n;


    solution s;
    s.number(n);
    
    return 0;
}