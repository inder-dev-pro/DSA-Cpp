class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
    
        while (start<end) {
            int mid=start+(end-start)/2;
            if (mid%2!=0) mid--;
                if (nums[mid+1]==nums[mid]) {
                    start=mid+2;
                }
                else {
                    end=mid-1;
                }
        }
        return nums[start];
    }
};