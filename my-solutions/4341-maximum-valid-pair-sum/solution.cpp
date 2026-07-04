class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int max_index = nums[0];
        int max_value = nums[0]+ nums[k];
        for(int i=k;i<nums.size();i++){
            max_index = max(max_index, nums[i-k]);
            max_value = max(max_value , max_index + nums[i]);
        }
        return max_value;
    }
};
