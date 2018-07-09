//140ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); 
        vector<int> res;
        //if(!n) return 0;
        for(int i=0; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};
//8ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            int t = target - nums[i];
            if (m.count(t) && m[t] != i) {
                res.push_back(i);
                res.push_back(m[t]);
                break;
            }
        }
        return res;
    }
};
