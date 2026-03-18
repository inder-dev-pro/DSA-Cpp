#include <algorithm>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int m=0;
        for (char c:s) {
            if (c=='(') {st.push('(');}
            else if (c==')') {st.pop();}
            m = max(m, static_cast<int>(st.size()));
        }
        return m;
    }
};

int main() {
    Solution obj1;
    string s="(1+(2*3)+((8)/4))+1";
    int ans=obj1.maxDepth(s);
    cout<<ans;
    return 0;
}