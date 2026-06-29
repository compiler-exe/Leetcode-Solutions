class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for (const std::string& pattern : patterns) {
            if (word.find(pattern) != std::string::npos) {
                count++;
            }
        }
        
        return count;
    }
};
