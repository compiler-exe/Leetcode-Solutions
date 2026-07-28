class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>charCount(26,0);
        for(int i =0 ; i< s.length();i++){
            charCount[s[i]-'a']++;
        }
        string left_half = "";
        string middle = "";
        for (int i = 0; i < 26; ++i) {
            if (charCount[i] % 2 != 0) {
                middle += (char)(i + 'a');
            }
            left_half += string(charCount[i] / 2, i + 'a');
        }
        string half2 = left_half;
        reverse(half2.begin(), half2.end());
        string result = left_half + middle +half2;
        return result;
    }
};
