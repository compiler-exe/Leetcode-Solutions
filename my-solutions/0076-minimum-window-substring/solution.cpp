class Solution {
public:
bool check(vector<int> &have, vector<int> &need)
{
    for(int i=0;i<256;i++)
    {
        if(have[i]<need[i])
        return false;
    }
    return true;
}

    string minWindow(string s, string t) {
        vector<int> have(256,0);
        vector<int> need(256,0);
        int n=s.size();
        int m=t.size();
        int i;
        if(n<m)
        return "";
        for(i=0;i<m;i++)
        {
            need[t[i]]++;
        }
        int low=0,high=0;
        int res=INT_MAX;
        int start=-1;
        for(high=0;high<n;high++){
            have[s[high]]++;
            while(check(have , need )){
                int length = high - low +1;
                if(res > length){
                    res = length;
                    start=low;
                }
                have[s[low]]--;
                low++;
            }
        }
        if(res == INT_MAX){
            return "";

        }
        return s.substr(start , res);
    }
};
