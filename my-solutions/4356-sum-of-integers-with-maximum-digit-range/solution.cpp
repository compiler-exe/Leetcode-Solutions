class Solution {
    private:
    int getdigitrange(int num){
        int minDigit=9;
        int maxDigit=0;
        while(num>0){
            int digit=num%10;
            minDigit= min(minDigit,digit);
            maxDigit= max(maxDigit,digit);
            num/=10;
        }
        return maxDigit-minDigit;
    }
public:
    int maxDigitRange(vector<int>& nums) {
        int maxRange=-1;
        long long maxSum=0;
        for(int i =0;i< nums.size();i++){
            int currentRange = getdigitrange(nums[i]);
            if(currentRange > maxRange){
                maxRange=currentRange;
                maxSum = nums[i];
            }
            else if(currentRange == maxRange){
                maxSum += nums[i];
            }
        }
        return maxSum;
    }
};

