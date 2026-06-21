class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height =0;
        int maximum=0;
        for(int i=0;i< gain.size();i++){
            height += gain[i];
            maximum = max( maximum , height);
        }
        return maximum;
    }
};
