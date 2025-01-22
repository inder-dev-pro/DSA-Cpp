#include <iostream>
using namespace std;

bool sorted(int arr[], int size) {
    if (size==0 || size==1) {
        return true;
    }

    if (arr[0]>arr[1]) {
        return false;
    }
    else {
        bool s=sorted(arr+1, size-1);
        return s;
    }
}

int main() {
    int arr[5]={1,4,9,11,1};

    cout<<sorted(arr,5);

    return 0;
}