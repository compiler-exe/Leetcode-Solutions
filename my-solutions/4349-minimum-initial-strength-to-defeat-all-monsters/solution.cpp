
class Solution {
public:
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n = monsters.size();
        int strength =0;
        vector<long long> diff(n + 1, 0);
        for (const auto& boost : boosts) {
            int l = boost[0];
            int r = boost[1];
            long long v = boost[2];
            diff[l] += v;
            diff[r + 1] -= v;
        }
        vector<long long> bonuses(n, 0);
        long long current_bonus = 0;
        for (int i = 0; i < n; ++i) {
            current_bonus += diff[i];
            bonuses[i] = current_bonus;
        }
        long long required_strength = 0;
        for(int i =n-1;i>=0;i--){
            if(required_strength==0){
                long long needed = monsters[i]-bonuses[i];
                required_strength = std::max(0LL , needed);
            }
            else{
                required_strength += monsters[i];
            }
        }
        return required_strength;
    }
};
