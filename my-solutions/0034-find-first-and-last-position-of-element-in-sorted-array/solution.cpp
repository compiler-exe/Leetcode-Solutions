class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0;
        int high = n-1;
        int low2=0;
        int high2= n-1;
        int guess;
        vector<int>res ={-1,-1};
        while(low<=high){
            guess= low +(high-low)/2;
            if(nums[guess]<target){
                low=guess+1;
            }
            else if(nums[guess]==target){
                res[1] = guess;
                low=guess+1;
            }
            else{
                high = guess-1;
            }
        }
        while(low2<=high2){
            guess= low2 +(high2-low2)/2;
            if(nums[guess]<target){
                low2=guess+1;
            }
            else if(nums[guess]==target){
                res[0] = guess;
                high2= guess-1;
            }
            else{
                high2 = guess-1;
            }
        }
        return res;
    }
};
