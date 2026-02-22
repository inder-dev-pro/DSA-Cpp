#include <iostream>
#include <vector>

using namespace std;

void bubble(vector<int> &nums) {
    int n=nums.size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<=n-(j+1); j++) {
            if (nums[j]>nums[j+1]) {swap(nums[j], nums[j+1]);}
        }
    }
}
int main() {
    vector<int> arr={2,6,1,4,10};
    bubble(arr);
    for (int i:arr) {cout<<i<<" ";}
}