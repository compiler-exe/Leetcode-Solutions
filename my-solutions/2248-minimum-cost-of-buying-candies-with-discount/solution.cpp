class Solution {
public:
    int minimumCost(vector<int>& cost) {
        std::sort(cost.begin(), cost.end());
        int output=0;
        for(int i= cost.size()-1; i >=0;i -=3){
            if(i-2 >=0){
            output = output + cost[i]+ cost[i-1] ;
            }
            else if(i-1>=0){
             output = output + cost[i]+ cost[i-1];
            }
            else if ( i>=0){
            output = output + cost[i];    
            }
        }
        return output;

    }
};
