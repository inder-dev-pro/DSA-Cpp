#include <iostream>
using namespace std;

int factorial(int n) {
    //Base Case
    if (n==0 || n==1) {
        return 1;
    }
    return n*factorial(n-1);
}

int main () {
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    cout<<"Factorial of the Number is:"<<factorial(n)<<endl;
}