class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int low = INT_MAX;
        int high = INT_MIN;
        unordered_set<int> present_nums;
        for(int num : nums) {
            low = min(low, num);
            high = max(high, num);
            present_nums.insert(num);
        }
        
        vector<int> missing;
        for (int i = low + 1; i < high; ++i) {
            if (present_nums.find(i) == present_nums.end()) {
                missing.push_back(i);
            }
        }
        
        return missing;

    }
};
