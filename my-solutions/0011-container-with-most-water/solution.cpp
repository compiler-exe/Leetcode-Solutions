class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j= height.size()-1;
        int maximum=0;
        int current=0;
        while(i < j){
            current = (min(height[i], height[j]))*(j-i);
            if(height[i]< height[j]){
                i++;
            }
            else{
                j--;
            }
            maximum  = max(maximum , current);
        }
        return maximum;
    }
};
