class Solution {
private:
    void solve(vector<vector<int>> &ans, vector<int> out, vector<int>& nums, int index) {
        //Base Case
        if (index>=nums.size()) {
            ans.push_back(out);
            return;
        }

        //Exclude
        solve(ans, out, nums, index+1);

        //Include
        int e=nums[index];
        out.push_back(e);
        solve(ans, out, nums, index+1);

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> out;
        int index=0;
        solve(ans, out, nums, index);
        set<vector<int>> s(ans.begin(), ans.end());
        vector<vector<int>> v(s.begin(), s.end());
        return v;
    }
};