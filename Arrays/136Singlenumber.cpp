//C++ 异或 12ms
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i<nums.size();++i){
            num ^=nums[i];
        }
        return num;
    }
};
//C++ 20ms
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int dvalue1,dvalue2;
        int singlenum;
        if(nums.size()==1) return nums[0];
        
        for(int i = 1; i < nums.size()-1; ++i){
            dvalue1 = nums[i] - nums[i-1];
            dvalue2 = nums[i+1] - nums[i];
            if(dvalue1==0 || dvalue2==0) {
               if(dvalue2==0 && i==1){
                  singlenum = nums[0];break; 
               }
               else if(dvalue1==0 && i==nums.size()-2){
                  singlenum = nums[nums.size()-1];break;  
               }
            }
            else {
                singlenum = nums[i];break;
            }

        }
        return singlenum;
    }
};
