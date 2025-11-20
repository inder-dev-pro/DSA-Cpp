class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows==0) {return ans;}
        vector<int> currow;
        vector<int> prevrow={1};
        ans.push_back(prevrow);
        if (numRows==1) {return ans;}
        for (int i=2; i<=numRows; i++) {
            vector<int> currow(i);
            int rowlength=i;
            currow[0]=1;
            if (prevrow.size()>1){
                for (int j=1; j<rowlength-1; j++) {
                currow[j]=prevrow[j]+prevrow[j-1];
                }
            }
            currow[rowlength-1]=1;
            ans.push_back(currow);
            prevrow=currow;
        }
        return ans;
    }
};