//4ms
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        if(strs.size() == 1) return strs[0];
        int m = strs.size();
        string res = "";
        int minlen = strs[0].size();
        for(int i = 0; i<m; ++i){
            if(strs[i].size() < minlen) minlen = strs[i].size();
        }
        
        for(int i = 0; i < minlen; ++i){
            string add = "";
            for(int j = 1; j < m; ++j){
                char cur = strs[j-1][i];
                if(cur != strs[j][i]) return res;
                add=cur;
 
            }
             res += add;
           
        }
        
        return res;
    }
};
//
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string res = "";
        for (int j = 0; j < strs[0].size(); ++j) {
            char c = strs[0][j];
            for (int i = 1; i < strs.size(); ++i) {
                if (j >= strs[i].size() || strs[i][j] != c) {
                    return res;
                }
            }
            res.push_back(c);
        }
        return res;
    }
};
//
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        for (int j = 0; j < strs[0].size(); ++j) {
            for (int i = 0; i < strs.size() - 1; ++i) {
                if (j >= strs[i].size() || j >= strs[i + 1].size() || strs[i][j] != strs[i + 1][j]) {
                    return strs[i].substr(0, j);
                }
            }
        }
        return strs[0];
    }
};
