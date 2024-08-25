#include <iostream>
using namespace std;

int minimumdays(int s , int n , int m){

    int sunday = s/7;

    int buyingdays = s-sunday;
    int totalfood = s*m;

    int ans = 0;

    if(totalfood % n == 0){
        ans = totalfood/n;
    }
    else{
        ans = totalfood/n+1;
    }

    if(ans <= buyingdays){
        return ans;
    }
    else{
        return -1;
    }

}

int main()
{

    return 0;
}