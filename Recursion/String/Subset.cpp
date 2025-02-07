class Solution {
private:
    void proc(vector<int> &nums,vector<int> out, vector<vector<int>> &ans, int index) {
        //Base Case
        if (index>=nums.size()) {
            ans.push_back(out);
            return;
        }

        //exclude
        proc(nums,out,ans, index+1);

        //include
        int element=nums[index];
        out.push_back(element);

        proc(nums, out, ans, index+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> out;
        vector<vector<int>> ans;
        int index=0;
        proc(nums, out, ans, index);
        return ans;
        
    }
};