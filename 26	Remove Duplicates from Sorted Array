//C
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize==0) return 0;
    int k=1;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]==nums[i-1]) continue;
        nums[k++]=nums[i];
    }
   return k;
}

//C++
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int j = 0, n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] != nums[j]) nums[++j] = nums[i];
        }
        return j + 1;
    }
};
