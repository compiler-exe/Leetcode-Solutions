class Solution {
public:
    int arrangeCoins(int n) {
        long long y =n;
        long long l=2*y;
        long long x = (pow(l+ 0.25,0.5)-0.50);
        return x;
    }
};
