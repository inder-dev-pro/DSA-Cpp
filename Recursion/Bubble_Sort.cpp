#include <iostream>
using namespace std;
void printr(int arr[], int start, int end) {
    cout<<"Array is:-";
    for (int i=start;i<=end;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int* ar (int arr[], int start, int end) {
    for (int i=0;i<end; i++) {
        for (int j=0; j<(end-i); j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return arr;
}

int main() {
    int arr[5]={2,3,1,44,9};
    ar(arr, 0,4);
    printr(arr, 0, 4);
    return 0;
}
