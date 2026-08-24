#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> g;
        for (int i=0; i<nums1.size(); i++) {
            for (int j=i+1; j<nums1.size(); j++) {
                if (nums1[i]<nums1[j]) {
                    g.push_back(j);
                }
                else {
                    g.push_back(-1);
                }
            }
        }
        vector<int> ans;
        for (int i=0; i<g.size(); i++) {
            auto it=find(nums2.begin(), nums2.end(), g[i]);
            if (g[i]==-1) {ans.push_back(-1);}
            else {
                ans.push_back(it-nums2.begin());
            }
        }
        return ans;
    }
};

int main() {
    Solution obj1;
    vector<int> nums1={4,1,2};
    vector<int> nums2={1,3,4,2};
    vector<int> ans=obj1.nextGreaterElement(nums1, nums2);
    
    for (int i:ans) {
        cout<<i<<" ";
        cout<<endl;
    }
    cout<<"Answer printed"<<endl;
    return 0;
}