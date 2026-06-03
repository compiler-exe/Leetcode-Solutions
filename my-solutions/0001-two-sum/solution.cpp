class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int j;
        int k= nums.size();
        for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                if(nums[i]+nums[j]==target ){
                    return{i,j};
                }
            }
        }
        return{};


    }
};
