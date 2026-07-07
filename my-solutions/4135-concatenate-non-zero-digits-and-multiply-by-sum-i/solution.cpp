class Solution {
public:
    long long sumAndMultiply(int n) {
        std::string s = std::to_string(n);
        long long x = 0;
        long long sum = 0;
        for (char c : s) {
            if (c > '0' && c <= '9') {
                int digit = c - '0';
                x = (x * 10) + digit;
                sum += digit;
            }
        }
        return x * sum;
    }
};
