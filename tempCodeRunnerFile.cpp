#include <iostream>
#include <sstream>
using namespace std;

class Student{
    int age;
    string first_name;
    string last_name;
    int standard;
    public:
    
    
    void set_age(int a){
        age = a;
    }
    void get_age(){
        cout<<age<<endl;
    }
    
    void set_first_name(string s){
        first_name = s;
    }
    
    
    void set_last_name(string t){
        first_name = t;
    }
    
    
    void get_first_name(){
        cout<<first_name<<endl;
    }
    void get_last_name(){
        cout<<last_name;
    }
    
    void set_standard(int b){
        standard = b;
    }
    
    void get_standard(){
        cout<<standard;
    }
    
    string to_string(){
        return first_name +","+ last_name;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}