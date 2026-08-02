class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        int count=0;
        double val= a/b;
        for(int i =0; i< n;i++){
            int x=0;
            int y=0;
            for(int j =i;j<n;j++){
                if(nums[j]%2!=0){
                    y++;
                }
                else{
                    x++;
                }
                if(a*y>=b*x && y>0){
                    count++;
                }
            }
        }
        return count;
    }
};
