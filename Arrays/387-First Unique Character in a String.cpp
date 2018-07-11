//60 ms?
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> aString;
        for(char c:s) ++aString[c];
        for(int i = 0; i < s.size(); ++i){
        if(aString[s[i]]==1) return i;
        }
        return -1;
    }
};
