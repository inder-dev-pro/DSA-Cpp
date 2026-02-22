
#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& nums) {
    int min_index=0;
    for (int i=0; i<nums.size()-1   ; i++) {
        for (int j=i+1; j<nums.size(); j++) {
            if (nums[min_index]>nums[j]) {
                min_index=j;
            }
        }
        swap(nums[min_index],nums[i]);
    }
}

int main() {
    vector<int> arr={2,6,1,4,10};
    selection_sort(arr);
    for (int i:arr) {cout<<i<<" ";}
}