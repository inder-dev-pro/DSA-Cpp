#include <iostream>
using namespace std;

int binary_search(int arr[],int start, int end, int key) {

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
    int key=34;
    cout<<binary_search(arr,0,4,key=4);
    return 0;
}

