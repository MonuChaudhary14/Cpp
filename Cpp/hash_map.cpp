#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //in unordered map, value print randomly but time complexity id o(1)
    //in ordered map, value print in a manner but time complexity is o(logn)


    //creation
    unordered_map<string , int> m;

    //insertion methods

    //1.
    pair<string , int> p = make_pair("Monu" , 3);
    m.insert(p);

    //2.
    pair<string , int> q("chaudhary" , 1);
    m.insert(q);

    //3.
    m["poonia"] = 5;
    m["poonia"] = 6;  /*In this line it change the value of poonia from 1 to 2*/

    //search
    cout<<m["chaudhary"]<<endl;
    cout<<m.at("Monu")<<endl;
    // cout<<m.at("unknown")<<endl;    //in this case it it show error
    cout<<m["unknown"]<<endl;  //In this case it create a entry with unknown it give 0 to its value
    cout<<m.at("unknown")<<endl;

    //check size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("poonia")<<endl;  /*it give 1 when present and 0 when absent*/

    //to erase
    m.erase("unknown");
    cout<<m.size()<<endl;

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;

    //iterator
    unordered_map<string , int> :: iterator iter = m.begin();

    while(iter != m.end()){

        cout<<iter->first<<" "<<iter->second<<endl;
        iter++;
    }



    return 0;
}

// video no.78
// time->52 min
// complexity analysis