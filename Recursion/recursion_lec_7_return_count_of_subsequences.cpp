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

int rec(vector<int> nums, int index, int sum, vector<int> &sub, int target) {
    if (index>=nums.size()) {
        if (sum==target) {
            return 1;
        }
    }
    else return 0;
    sub.push_back(nums[index]);
    sum+=nums[index];
    int l=rec(nums, index+1, sum, sub, target);
    sub.pop_back();
    sum-=nums[index];
    int r=rec(nums, index+1, sum, sub, target);

    return l+r;
}

int main() {
    vector<int> nums={1,2,1};
    vector<int> sub;
    cout<<rec(nums, 0, 0, sub, 2)<<endl;
    return 0;
}