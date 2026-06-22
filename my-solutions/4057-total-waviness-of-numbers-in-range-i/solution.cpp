class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total_waviness = 0;
        for (int i = num1; i <= num2; ++i) {

            int digits[20];
            int len = 0;
            int temp = i;
            
            while (temp > 0) {
                digits[len++] = temp % 10;
                temp /= 10;
            }
            
            for (int j = 1; j < len - 1; ++j) {
                int prev = digits[j - 1];
                int curr = digits[j];
                int next = digits[j + 1];
                
                bool is_peak = (curr > prev) && (curr > next);
                bool is_valley = (curr < prev) && (curr < next);
                
                if (is_peak || is_valley) {
                    total_waviness++;
                }
            }
        }
        
        return total_waviness;

    }
};
