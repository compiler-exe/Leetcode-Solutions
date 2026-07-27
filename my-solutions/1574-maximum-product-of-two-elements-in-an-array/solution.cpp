class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int Max1 = INT_MIN;
        int Max2 = INT_MIN;
        for(int i =0;i< nums.size();i++){
            if(nums[i]>= Max1){
                Max2 = Max1;
                Max1 = nums[i];
            }
            else if(nums[i]>= Max2 ){
                Max2= nums[i];
            }
        }
        return (Max1-1)*(Max2-1);
    }
};
