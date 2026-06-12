#include <algorithm> /
class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> result;
        for (int i = 0; i < nums1.size(); ++i) {
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums1[i] == nums2[j]) {
                    if (std::find(result.begin(), result.end(), nums1[i]) == result.end()) {
                        result.push_back(nums1[i]);
                    }
                    break;
                }
            }
        }
        
        return result;
    }
};
