#include <iostream>
using namespace std;

double power(double a, int b) {
    //Base Case
    if (b==0) {
        return 1;
    }

    if (b<0) {
        return (1.0/a)*power(a,b+1);
    }

    else {
        return a*power(a, b-1);
    }
    
}

int main() {
    double a;
    int b;
    cout<<"Enter the Values:"<<endl;
    cin>>a>>b;

    cout<<"Final Value is:"<<power(a,b);

    return 0;
}