class Solution {
public:
    int maxProduct(int n) {
        vector<int> f;
        int temp = n;
        
        while (temp > 0) {
            int current = temp % 10;
            f.push_back(current);
            temp = temp / 10;
        }
        
        sort(f.rbegin(), f.rend());
        
        return f[0] * f[1];
    }
};
