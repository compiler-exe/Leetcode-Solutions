class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int min_land_finish = INT_MAX;
        for (size_t i = 0; i < landStartTime.size(); ++i) {
            min_land_finish = std::min(min_land_finish, landStartTime[i] + landDuration[i]);
        }

        int min_water_finish = INT_MAX;
        for (size_t i = 0; i < waterStartTime.size(); ++i) {
            min_water_finish = std::min(min_water_finish, waterStartTime[i] + waterDuration[i]);
        }

        int earliest_time = INT_MAX;

        for (size_t i = 0; i < waterStartTime.size(); ++i) {
            int finish_time = std::max(min_land_finish, waterStartTime[i]) + waterDuration[i];
            earliest_time = std::min(earliest_time, finish_time);
        }

        for (size_t i = 0; i < landStartTime.size(); ++i) {
            int finish_time = std::max(min_water_finish, landStartTime[i]) + landDuration[i];
            earliest_time = std::min(earliest_time, finish_time);
        }

        return earliest_time;
    }
};
