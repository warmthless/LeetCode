//
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        vector<char> modi;
        for(int i=0; i<s.size(); ++i){
            if((s[i] >='a' && s[i] <='z') || (s[i] >='A' && s[i]<='Z') || (s[i] >='0' && s[i]<='9') ){
                modi.push_back(s[i]);
            }
        }
        for(int i=0,j=modi.size()-1; i<j; ++i,--j){
           if((modi[i] + 32 - 'a') %32 != (modi[j] + 32 - 'a') % 32)  return false;
          }        
        return true;
    }
    /*bool isvalid(char &ch) {
        if (ch >= 'a' && ch <= 'z') return true;
        if (ch >= 'A' && ch <= 'Z') return true;
        if (ch >= '0' && ch <= '9') return true;
        return false;
    }*/
};
