class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string result = "";
        
        while (columnNumber > 0) {
            columnNumber--;
            char currentChar = 'A' + (columnNumber % 26);
            result += currentChar;
            columnNumber /= 26;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};
