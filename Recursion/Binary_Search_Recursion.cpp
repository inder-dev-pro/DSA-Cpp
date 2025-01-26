#include <iostream>
using namespace std;
void ar(int arr[], int start, int end) {
    cout<<"Array is:-";
    for (int i=start;i<=end;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};

int binary_search(int arr[],int start, int end, int key) {
    ar(arr,start,end);
    //Base Case
    int mid=start+(end-start)/2;
    if (arr[mid]==key) {
        return mid;
    }
    //Recursive Condition
    else if (arr[mid]<key) {
        return binary_search(arr,mid+1,end,key);
    }
    else{
        return binary_search(arr, start, mid,key);
    }
};

int main() {
    int arr[5]={1,4,22,34,35};
    cout<<"Index of Element:"<<binary_search(arr,0,4,34);
    return 0;
}

