class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int, int>> stack;
        int max_area = 0;
        int n = heights.size();

        for (int i = 0; i < heights.size(); i++) {
            int start = i;

            while(!stack.empty() && stack.top().second > heights[i]) {
                pair<int , int> top = stack.top();
                int height = top.second;
                int index = top.first;
                max_area = max(max_area , height * (i - index));

                start = index;
                stack.pop();
            }
            stack.push({start, heights[i]});
        }

        while(!stack.empty()) {
            int index = stack.top().first;
            int height = stack.top().second;

            max_area = max(max_area , height * (n - index));
            stack.pop();
        }
        return max_area;
    }
};
