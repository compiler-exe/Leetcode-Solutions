class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int q = n/8;
        int r = n%8;
        int ans = 4*q*(q+1) + (q+1)*r;
        return ans;
    }
};
