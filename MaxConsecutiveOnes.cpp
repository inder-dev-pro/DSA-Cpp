class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> arr;
        int currones=0;
        int maxones=0;
        for(int i=0;i<nums.size();i++) {
            if (nums[i]==1) {
                currones+=1;
            }
            else{
                if (currones>maxones) {
                    maxones=currones;
                }
                currones=0;
            }
        }
        if (currones!=0 && maxones<currones) {
            maxones=currones;
        }
        return maxones;
    }
};