class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            vector<vector<int>> ans;
            sort(intervals.begin(), intervals.end());
            for(vector<int> v:intervals) {
                if (ans.empty() || ans.back()[1]<v[0]){
                    ans.push_back(v);
                }
                else {
                    ans.back()[1]=max(ans.back()[1], v[1]);
                }
            }
            return ans;
        }
    };
    