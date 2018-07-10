//8ms
char* reverseString(char* s) {
    int len = strlen(s);
    for(int i=0,j=len-1;i<j;i++,j--){
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
    return s;
}
//8ms
class Solution {
public:
    string reverseString(string s) {
        int len = s.size();
        for(int i=0,j=len-1; i<j; ++i,--j){
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
        return s;
    }
};
//
class Solution {
public:
    string reverseString(string s) {
        reverse(s.begin(),s.end());
        return s;
    }
};
