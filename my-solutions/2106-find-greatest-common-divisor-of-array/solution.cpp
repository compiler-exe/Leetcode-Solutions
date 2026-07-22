class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minimum=INT_MAX;
        int maximum =INT_MIN;
        for(int i=0;i< nums.size();i++){
            maximum = max(maximum, nums[i]);
            minimum = min(minimum , nums[i]);
        }
        return std::gcd(minimum,maximum);
    }
};
