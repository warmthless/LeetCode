//C++ 0ms
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size() - 1; i >= 0; --i){
            if(digits[i] == 9){
               digits[i] = 0;      
                
            }
            else {
                digits[i] += 1;
                return digits;
            }
        }
        if(digits.front() == 0){
                  digits.insert(digits.begin(), 1);
        }
 
        return digits;
    }
};
//C++ 4ms
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.empty()) return digits;
        int carry = 1, n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (carry == 0) return digits;
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        if (carry == 1) digits.insert(digits.begin(), 1);
        return digits;
    }
};
