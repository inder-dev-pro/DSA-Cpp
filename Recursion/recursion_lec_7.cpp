#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <limits>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>

using namespace std;

void rec(vector<int> nums, int index, int sum, vector<int> &sub, int target) {
    if (index>=nums.size()) {
        if (sum==target) {
            for (int i:sub) {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    sub.push_back(nums[index]);
    sum+=nums[index];
    rec(nums, index+1, sum, sub, target);
    sub.pop_back();
    sum-=nums[index];
    rec(nums, index+1, sum, sub, target);
}

int main() {
    vector<int> nums={1,2,1};
    vector<int> sub;
    rec(nums, 0, 0, sub, 2);
    return 0;
}