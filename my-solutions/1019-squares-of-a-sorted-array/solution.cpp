class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n); 
        
        int left = 0;
        int right = n - 1;

        for(int i=n-1;i>=0;i--){
            int rightsquare = nums[right]*nums[right];
            int leftsquare = nums[left]*nums[left];

            if(leftsquare > rightsquare){
                result[i]= leftsquare;
                left++;
            }
            else{
                result[i]= rightsquare;
                right--;

            }


        }
        return result;
    }
};
