//C 8ms
void rotate(int* nums, int numsSize, int k) {
     if((numsSize==0) || ((k%=numsSize) == 0)) return;  
     int count = 0;
     int currentMove = nums[count];
     int tmp = 0;
     int checkCurrent = 0;
     for(int i = 0; i < numsSize; ++i){
         count = (count+k)%numsSize;
         tmp = nums[count];
         nums[count]=currentMove;
         currentMove = tmp;
         if(count == checkCurrent){
             ++count;
             ++checkCurrent;
             currentMove = nums[count];
         }
     }
    
}
//C++ 48ms
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty() || (k %= nums.size()) == 0) return;
        int n = nums.size();
        for (int i = 0; i < n - k; ++i) {
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
    }
};
//C++  超时
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty()) return;
        int n = nums.size(), start = 0;   
        while (n && (k %= n)) {
            for (int i = 0; i < k; ++i) {
                swap(nums[i + start], nums[n - k + i + start]);
            }
            n -= k;
            start += k;
        }
    }
};
//C++ 24ms
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty() || (k %= nums.size()) == 0) return;
        int n = nums.size();
        reverse(nums.begin(), nums.begin() + n - k);
        reverse(nums.begin() + n - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};
//C++ O(n) Space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> t = nums;
        for (int i = 0; i < nums.size(); ++i) {
            nums[(i + k) % nums.size()] = t[i];
        }
    }
};
