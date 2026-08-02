class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = 0;
        
        for(int i =0;i < nums.size();i++){
            for(int j =i+1; j< nums.size();j++){
                long long current_lcm = std::lcm(1LL * nums[i], 1LL * nums[j]);
                long long current_gcd = std::gcd(1LL * nums[i], 1LL * nums[j]);
                
                long long val = current_lcm / current_gcd;
                ans = max(ans, val);
            }
        }
        return ans;
    }
};
