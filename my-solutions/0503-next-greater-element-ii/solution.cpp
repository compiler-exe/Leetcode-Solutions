class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> st;
        for (int i = 0; i < 2 * n; ++i) {
            int current_index = i % n;
            
            while (!st.empty() && nums[st.top()] < nums[current_index]) {
                result[st.top()] = nums[current_index];
                st.pop();
            }
            if (i < n) {
                st.push(current_index);
            }
        }
        return result;
    }
};
