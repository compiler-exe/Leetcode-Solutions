#include <vector>
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int , int>f;
        int sum=0;
        int result=0;
        f[0]=1;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                sum++;
            }
            else{
                sum--;
            }
            if(sum==0){
                result=max(result,i+1);
                continue;
            }
            if(f.find(sum)==f.end()){
                f[sum]=i;
            }
            else{
                int index=f[sum];
                int length = i-index;
                result = max(result,length);
            }
        }
        return result;
    } 
};
