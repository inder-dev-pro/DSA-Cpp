#include <iostream>
using namespace std;
void printr(int arr[], int start, int end) {
    cout<<"Array is:-";
    for (int i=start;i<=end;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};


int* ar (int arr[], int end) {
    int start=0;
    //Base Case
    if (end==start) {
        return arr;
    }
    if (arr[start]>arr[start+1]) {
        swap(arr[start], arr[start+1]);
        return ar(arr, end-1);
    }
    return ar(arr,end-1);
}

int main() {
    int arr[5]={2,3,1,44,9};
    ar(arr,4);
    printr(arr, 0, 4);
    return 0;
}