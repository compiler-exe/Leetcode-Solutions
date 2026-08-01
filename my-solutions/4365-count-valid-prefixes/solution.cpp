class Solution {
public:
    int countValidPrefixes(string s) {
        int count0 =0;
        int count1=0;
        int ans=0;
        for(char c:s){
            if(c=='1'){
                count1++;
            }
            else{
                count0++;
            }
            if(abs(count0-count1)<=1){
                ans++;
            }
        }
        return ans;
    }
};
