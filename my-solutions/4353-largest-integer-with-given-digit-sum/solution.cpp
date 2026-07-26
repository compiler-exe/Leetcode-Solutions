class Solution {
public:
    int largestInteger(int n, int s) {
        if(s> (n*9)){
            return -1;
        }
        if(s ==0){
            return 0;
        }
        int number[n];
        for(int i =0;i<n;i++){
            if(s-9>=0){
                number[i]=9;
                s = s-9;
            }
            else if(s<9){
                number[i]=s;
                s=0;
            }
            else if(s=0){
                number[i]=0;
            }
        }
        int ans = 0;
        int a =0;
        for(int i = n-1;i>=0;i--){
            ans = ans + number[i]*(pow(10,a));
            a++;
            
        }
        return ans;
    }
};
