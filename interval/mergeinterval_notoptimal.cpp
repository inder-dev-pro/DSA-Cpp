class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(), intervals.end());
            vector<vector<int>> ans;
            if (intervals.size()==1) {return intervals;}
            for (int i=0; i<intervals.size()-1; i++) {
                if (intervals[i][1]>=intervals[i+1][0]) {
                    vector<int> temp={min(intervals[i][0],intervals[i+1][0]), max(intervals[i+1][1], intervals[i][1])};
                    ans.push_back(temp);
                }
                else {
                    ans.push_back(intervals[i]);
                    ans.push_back(intervals[i+1]);
    
                }
            }
            return ans;
        }
    };