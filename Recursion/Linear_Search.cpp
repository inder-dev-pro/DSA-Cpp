#include <iostream>
using namespace std;
void printarray(int arr[],int size) {
    //Base Case
    if (size==0) {
        return;
    }
    cout<<arr[0]<<",";
    return printarray(arr+1, size-1);
}


bool Linear_Search(int arr[], int size, int key) {

    printarray(arr,size);
    cout<<endl;
    //Base Case
    if (size==0) {
        return false;
    }
    if (arr[0]==key) {
        return true;
    }
    else {
        return Linear_Search(arr+1, size-1, key);
    }
}

int main() {
    int arr[5]={2,33,4,25,5};
    int key;
    cout<<"Enter the Key:"<<endl;
    cin>>key;
    cout<<Linear_Search(arr,5,key);
}