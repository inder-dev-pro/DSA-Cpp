class Solution {
    private:
        void recursion(vector<int> &candidates, int index, int target,
                       vector<int> &temp, vector<vector<int>> &ans) {
            if (target == 0) {
                ans.push_back(temp);
                return;
            }
            if (index == candidates.size()) return;
            if (candidates[index] <= target) {
                temp.push_back(candidates[index]);
                recursion(candidates, index + 1, target - candidates[index], temp, ans);
                temp.pop_back();
            }
            int nextIndex = index + 1;
            while (nextIndex < candidates.size() &&
                   candidates[nextIndex] == candidates[index]) {
                nextIndex++;
            }
            recursion(candidates, nextIndex, target, temp, ans);
        }
    
    public:
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            sort(candidates.begin(), candidates.end());
            vector<vector<int>> ans;
            vector<int> temp;
            recursion(candidates, 0, target, temp, ans);
            return ans;
        }
    };