class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        if (occupiedIntervals.empty()) return {};
        sort(occupiedIntervals.begin(), occupiedIntervals.end());
        vector<vector<int>> merged;
        for (const auto& interval : occupiedIntervals) {
            if (merged.empty()) {
                merged.push_back(interval);
            } else {
                auto& last = merged.back();
                if (interval[0] <= last[1] + 1) {
                    last[1] = max(last[1], interval[1]);
                } else {
                    merged.push_back(interval);
                }
            }
        }
        vector<vector<int>> result;
        for (const auto& interval : merged) {
            int s = interval[0];
            int e = interval[1];
            if (e < freeStart || s > freeEnd) {
                result.push_back({s, e});
            } 
            else {
                if (s < freeStart) {
                    result.push_back({s, freeStart - 1});
                }
                if (e > freeEnd) {
                    result.push_back({freeEnd + 1, e});
                }
            }
        }
        return result;
            
    }
};
