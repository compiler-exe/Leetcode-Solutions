class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        for (int len = 2; len <= 9; ++len) {
            for (int startDigit = 1; startDigit <= 10 - len; ++startDigit) {
                int num = 0;
                int currentDigit = startDigit;
                for (int i = 0; i < len; ++i) {
                    num = (num * 10) + currentDigit;
                    currentDigit++;
                }
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }
        return result;
    }
};
