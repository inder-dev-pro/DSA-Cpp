class Solution {
    private:
        bool isAnagram(string s, string t) {
            if (s.size()!=t.size()) {return false;}
            unordered_map<char, int> hash1;
            unordered_map<char, int> hash2;
            int count=1;
            for (char c:s) {
                if (hash1.find(c)!=hash1.end()) {
                    hash1[c]++;
                }
                else {
                    hash1.insert({c, count});
                }
            }
            count=1;
            for (char c:t) {
                if (hash2.find(c)!=hash2.end()) {
                    hash2[c]++;
                }
                else {
                    hash2.insert({c, count});
                }
            }
            return (hash1==hash2);
        }
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> ans;
            vector<string> temp;
            unordered_set<int> skip;
            if (strs[0]=="") {return {{""}};}
            for (int i=0; i<strs.size(); i++) {
                if (skip.find(i)==skip.end()) {
                    skip.insert(i);
                    temp.push_back(strs[i]);
                    for (int j=i+1; j<strs.size(); j++) {
                        if (isAnagram(strs[i], strs[j])){
                        skip.insert(j);
                        temp.push_back(strs[j]);
                        }
                }
                ans.push_back(temp);
                temp={};
                }
            }
            return ans;
        }
    };