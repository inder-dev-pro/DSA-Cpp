#include <iostream>
#include <vector>

using namespace std;
    int pivot(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid;
        while (start<=end) {
            mid=start+(end-start)/2;
            if (nums[mid]<nums[0]) {
                end=mid-1;
            }
            else if(nums[mid]>nums[0]) {
                start=mid+1;
            }
            else{
                    return mid;
                }
            }
            return mid;
        }

int main() {
    vector<int> arr = {3,4,5,2,2};
    int p=pivot(arr);

    cout<<"Pivot Index is :"<<p<<endl<<"Pivot Element is :"<<arr[p]<<endl;
    return 0;
}