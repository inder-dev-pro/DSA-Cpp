class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string curr="";
        for (char c:s) {
            if (c==' ') {
                if (!curr.empty()) {
                    v.push_back(curr);
                    curr="";
                    continue;
                }
            }
            else {
                    curr+=c;
                
            }
        }
         if (!curr.empty()) {
            v.push_back(curr);
        }
        
        if (v.empty()) return "";
        string ans;
        int si=v.size()-1;
        while(si>0) {
            ans+=v[si];
            ans+=" ";
            si--;
        }
        ans+=v[0];
        return ans;
    }
};