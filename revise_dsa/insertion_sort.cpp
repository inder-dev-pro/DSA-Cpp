#include <iostream>
#include <vector>
using namespace std;

void insertion(vector<int> &nums) {
    for (int i=0; i<nums.size(); i++) {
        int j=i;
        while(j>0 && nums[j-1]>nums[j]) {
            swap(nums[j-1], nums[j]);
            j--;
        }
    }
}
int main() {
    vector<int> nums={2,6,8,4,1};
    insertion(nums);
    for (int i:nums) {cout<<i<<" ";}
    return 0;
}