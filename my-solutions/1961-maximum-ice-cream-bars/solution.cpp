class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        std::sort(costs.begin(), costs.end());
        int count=0;
        long long money=0;
        for(int i =0; i< costs.size();i++){
            money = money + costs[i];
            if(money <= coins){
                count++;
            }
        }
        return count;
    }
};
