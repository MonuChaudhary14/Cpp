 #include<iostream>
 #include<cmath>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

// OR

int factorial(int n){
    int factorial = 1;

    for(int i = 1 ; i <= n ; i++){
        factorial = factorial * i;
    }
    return factorial;
}

int fibonacci(int m){
    if (m<2){
        return 1;
    }
    return fibonacci(m-2)+ fibonacci(m-1);
}

// Another method on main


int powerof2(int n){
    if(n == 0){
        return 1;
    }
    return 2 * powerof2(n-1);
}

void counting(int n){
    if(n == 0){
        return ;
    }
    cout<<n<<endl;
    counting(n-1);   /*This will print numbers in descending order*/
}

void counting1(int n){
    if(n == 0){
        return ;
    }
    counting1(n-1);   /*This will print it in ascending order*/
    cout<<n;
}

int sum (int x , int y){
    cout<<"The function with two arguments"<<endl;
    return x+y;
}

int sum (int x, int y,int z){
    cout<<"The function with 3 arguments"<<endl;
    return x+y+z;
}
// Calculate the volume of Cylinder
float volume(double r, int h){
return (3.14*r*r*h);
}


int main(){

int a;
cout<<"Enter the value of a ";
cin>>a;
cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
int b;
cout<<"Enter the value of b ";
cin>>b;
cout<<"The "<<b<<" term of the fibonacci series is "<<fibonacci(b)<<endl;


int n;
cin>>n;

int a = 0;
int b = 1;

cout<<a<<" "<<b<<" ";
for(int i = 0; i < n; i++){
    
    int nextnumber = a+b;
    cout<<nextnumber<<" ";

    a = b;
    b = nextnumber;
}

cout<<"The sum of 4,5 is "<<sum(4,5)<<endl;
cout<<"The sum of 5,8,7 is "<<sum(5,8,7)<<endl;

cout<<"The volume of cylinder is "<<volume(5,7);

    return 0;
}
