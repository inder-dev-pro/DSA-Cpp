#include <iostream>
using namespace std;

int Sum(int arr[], int size) {
    if (size==0) {
        return 0;
    }
    return arr[0]+=Sum(arr+1, size-1);
}

int main () {
    int arr[5]={2,3,5,13,4};
    cout<<Sum(arr,5);
}