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

void sub(vector<int> nums, int index, vector<int>& s, int n) {
    if (index==n) {
        for (int i:s) {cout<<i<<" ";}
    }
    s.push_back(nums[index]);
    sub(nums, index+1, s, n);
    s.erase(s.begin()+index);
    sub(nums, index+1, s, n);
}

int main() {
    vector<int> nums={3,1,2};
    vector<int> s;
    sub(nums, 0, s, 3);
    
}
