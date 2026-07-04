class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int a =(n-1)/2;
        int x = nums[a];
        for(int i=0;i<n;i++){
            if(nums[i]==x && i!=a){
                return false;
            }
        }
        return true;
    }
};
