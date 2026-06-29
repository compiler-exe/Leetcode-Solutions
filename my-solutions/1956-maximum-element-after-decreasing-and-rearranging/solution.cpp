class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        std::sort(arr.begin() , arr.end());
        int maximum = 1;
        arr[0]=1;
        if(arr.size()==1){
            return 1;
        }
        for(int i=0;i < arr.size()-1; i++){
            if(arr[i+1]-arr[i] >= 1){
                arr[i+1] = arr[i]+1;
                maximum = max( maximum , arr[i+1]);
            }
        }
        return maximum;
    }
};
