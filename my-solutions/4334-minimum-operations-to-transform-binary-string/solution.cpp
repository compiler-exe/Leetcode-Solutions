class Solution {
public:
    int minOperations(string s1, string s2) {
        int n = s1.length();
    
    if (n == 1) {
        if (s1 == s2) return 0;
        if (s1 == "1" && s2 == "0") return -1;
        return 1;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[i]) {
            continue;
        }

        if (s1[i] == '0') {
            count += 1;
        } 
        else {
            if (i + 1 < n && s1[i+1] == '1' && s2[i+1] == '0') {
                count += 1; 
                i++;                   
            } 
            else {
                count += 2; 
            }
        }
    }

    return count;
    }
};
