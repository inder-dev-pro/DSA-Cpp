class Solution {
private:
    bool palindrome(string s, int start, int end) {
        while(start<=end) {
            if (s[start++]!=s[end--]) {
                return false;
            }
        }
        return true;
    }
    void subpal(int index, string s,vector<vector<string>> &ans, vector<string> &out) {
        // base case
        if (index==s.length()) {
            ans.push_back(out);
            return;
        }
        for (int i=index; i<s.length(); ++i) {
            if (palindrome(s, index, i)) {
                out.push_back(s.substr(index, i-index+1));
                subpal(i+1, s, ans, out);
                out.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> out;
        subpal(0, s, ans, out);
        return ans;
    }
};