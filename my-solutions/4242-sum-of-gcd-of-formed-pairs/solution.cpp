class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>f(n,0);
        int mx=0;
        for(int i=0;i<n;i++){
            mx = max(mx , nums[i]);
            f[i]=std::gcd(nums[i],mx);
        }
        sort(f.begin() , f.end());
        int left =0;
        int right = n-1;
        long long result=0;
        while(right>left){
            result += gcd(f[left], f[right]);
            left++;
            right--;
        }
        return result;
    }
};
