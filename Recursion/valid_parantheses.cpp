class Solution {
private:
    void backtrack(int open, int close, int n, string s, vector<string> &v) {
        if (open==n && close==n) {
            v.push_back(s);
            return;
        }
        if(open<n) {
            backtrack(open+1, close, n, s+'(', v);
        }
        if(open>close) {
            backtrack(open, close+1, n, s+')', v);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s="";
        backtrack(0,0,n,s,v);
        return v;
    }
};