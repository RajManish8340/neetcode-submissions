class Solution {
public:
    int trap(vector<int>& height) {
        int totalWater = 0;
        int i = 0;
        int j = height.size() -1;
        int leftMax = 0;
        int rightMax = 0;

        while (i < j) {
            leftMax = max(height[i], leftMax);
            rightMax = max(height[j], rightMax);

            if (leftMax < rightMax) {
                totalWater = totalWater + leftMax - height[i];
                i++;
            } else {
                totalWater = totalWater + rightMax - height[j];
                j--;
            }
        }
        return totalWater;
    }
};