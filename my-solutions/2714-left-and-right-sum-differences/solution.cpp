class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalSum=0;
        int n= nums.size();
        vector<int> result(n);
        for(int i =0;i< n;i++){
            totalSum += nums[i];
        }
        int leftSum=0;
        result[0]= totalSum-nums[0];
        for(int j=1;j<n;j++){
            leftSum +=nums[j-1];
            result[j] = std::abs(totalSum - 2*leftSum - nums[j]);
        }
        return result;

    }
};
