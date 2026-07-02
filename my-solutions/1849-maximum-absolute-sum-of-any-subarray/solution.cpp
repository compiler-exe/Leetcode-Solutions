class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minSum= 0;
        int maxSum= 0;
        int currentMax=0;
        int currentMin=0;
        for(int i =0;i< nums.size();i++){
            currentMax = max(0,currentMax+nums[i]);
            currentMin = min(0,currentMin+nums[i]);
            maxSum = max(maxSum , currentMax);
            minSum = min(minSum , currentMin);
        }
        int absMinSum = -1*minSum;
        return max(maxSum , absMinSum);
        
    }
};
