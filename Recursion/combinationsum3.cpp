class Solution {
    private:
        void recursion(vector<vector<int>> &ans, int n, int k, vector<int> &temp, int curr) {
            if (n==0 && temp.size()==k) {
                ans.push_back(temp);
                return;
            }
            if (curr>9) {
                return;
            }
            if (curr<=n) {
                temp.push_back(curr);
                recursion(ans, n-curr, k, temp, curr+1);
                temp.pop_back();
            }
            recursion(ans, n, k, temp, curr+1);
        }
    public:
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<int> temp;
            vector<vector<int>> ans;
            recursion(ans, n, k, temp, 1);
            return ans;
        }
    };