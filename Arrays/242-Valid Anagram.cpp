//16ms
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        if(s.empty() && t.empty()) return true;     
        int len = s.size();
        unordered_map<char,int> sString;
        for(char c:s) ++sString[c];
        for (int i = 0; i<len; ++i){
            if(--sString[t[i]] < 0) return false;
        } 
        return true;
    }
};
