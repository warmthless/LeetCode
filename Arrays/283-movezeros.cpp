//16ms
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(!n) return;
        int i = 0,count=0;
        for(int p = 0; p<n; ++p){
            if(nums[p]!=0) count++;
        }
        if(!count) return;
        while (i < count){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
            }  
            else {
                ++i;
            }
        }
    }
};
//16ms
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, j = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                swap(nums[i], nums[j++]);
            }
        }
    }
};
