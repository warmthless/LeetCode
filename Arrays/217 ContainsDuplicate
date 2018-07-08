//C 超时 17/18
bool containsDuplicate(int* nums, int numsSize) {
     if(!numsSize || numsSize==1) return 0;
     bool check = 0;
    
     for(int i = 0; i < numsSize - 1; ++i){
         int tmp1 = nums[i];
         for(int j = i+1; j< numsSize; ++j){
             int tmp2 = nums[j];
             if(tmp1==tmp2){
                 check = 1;
                 break;
             }
         }
     }
    return check;
}
//C++
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) return true;
        }
        return false;
    }
};
