class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority= nums[0];
        int count=0;
        for(int i=0;i< nums.size();i++){
            if(nums[i]==majority){
                count++;
            }
            else if(nums[i] !=majority){
                count--;
                if(count<0){
                    majority=nums[i];
                    count=0;
                }
            }
        }
        return majority;
    }
};
