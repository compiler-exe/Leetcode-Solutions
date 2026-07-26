class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        vector<vector<int>>matrix;
        int i=0;
        int j=0;
        int a =0;
        while(i < series1.size() && j < series2.size()){
            if(series1[i][0] == series2[j][0]){
                a = series1[i][1] + series2[j][1];
                matrix.push_back({series1[i][0] , a});
                i++;
                j++;
            }
            else if(series1[i][0] < series2[j][0]){
                a = series1[i][1] + series2[j][1];
                matrix.push_back({series1[i][0] , a});
                i++;
            }
            else if(series1[i][0] > series2[j][0]){
                a = series1[i][1] + series2[j][1];
                matrix.push_back({series2[j][0] , a});
                j++;
            }
        }
        while(i<series1.size()){
                matrix.push_back({series1[i][0], series1[i][1]});
            i++;
        }
        while(j<series2.size()){
                matrix.push_back({series2[j][0], series2[j][1]});
            j++;
        }
        return matrix;
    }
};
