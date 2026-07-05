class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n>m){
            return false;
        }
        vector<int> L(n, m);
        int j = 0;
        for (int i = 0; i < n; ++i) {
            while (j < m && t[j] != s[i]) {
                j++;
            }
            if (j < m) {
                L[i] = j;
                j++;
            } else {
                break;
            }
        }
        if (L[n - 1] != m) {
            return true;
        }
        vector<int> R(n, -1);
        j = m - 1;
        for (int i = n - 1; i >= 0; --i) {
            while (j >= 0 && t[j] != s[i]) {
                j--;
            }
            if (j >= 0) {
                R[i] = j;
                j--;
            } else {
                break;
            }
        }
        for (int i = 0; i < n; ++i) {
            int left_idx = (i == 0) ? -1 : L[i - 1];
            int right_idx = (i == n - 1) ? m : R[i + 1];
            if (left_idx != m && right_idx != -1 && left_idx < right_idx - 1) {
                return true;
            }
        }

        return false;
    }
};
