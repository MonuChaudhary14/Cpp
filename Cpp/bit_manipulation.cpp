#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*to check if at any postion a bit is 0 or 1*/
int getbit(int n , int position){   
     /*by left shifting 1 i times it give a binary number which has i on that position and 0 at all position*/
    int digit = (n & (1 << position));  
    if(digit != 0){
        return 1;
    }
    return 0;
}

int setbit(int n , int position){   /*set 1 into a paricular position*/

    // int digit = (n | (1 << position));

    return (n | (1 << position));

}

int unsetbit(int n , int position){  /*to set 0 at a particlar position*/

    int mask = ~(1 << position);

    return (n & mask);

}

int updatebit(int n , int position , int value){  /*to update any type of bit*/
    int mask = ~(1 << position);
    n = n & mask;

    return (n | value << position);
}

int numberofones(int n){  /*to get number of ones*/
    int count = 0;

    while(n){
        n = n & (n-1); /*by doing this we reduce 1 from a binary 1 by one so number of times this operation is done is number of ones*/
        count++;
    }
    return count;
}
 
int main(){

    cout<<getbit(5 ,2);
    
    return 0;
}