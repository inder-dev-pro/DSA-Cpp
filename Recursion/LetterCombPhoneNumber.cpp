class Solution {
private:
    vector<string> ans;
    map<char, string> phoneKeypad = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
        void comb(string digits, string output, vector<string> &ans, int currindex) {
        //base case
        if (output.length()==digits.length()) {
            ans.push_back(output);
            return;
        }
        string curr=phoneKeypad[digits[currindex]];
        for (int i=0; i<(curr.length()); i++) {
            output.push_back(curr[i]);
            comb(digits, output, ans, currindex+1);
            output.pop_back();
        }
    };
public:
    vector<string> letterCombinations(string digits) {
        vector<string> f;
        int s=digits.length();
        if (s==0) {
            return f;
        }
        comb(digits,"",f,0);

        return f;
    }
};