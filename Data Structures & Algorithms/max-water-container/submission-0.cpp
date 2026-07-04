class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int prevMax = 0;
        int currentMax = 0;

        int n = heights.size();
        int j = n -1 ;
        int i = 0 ;

        while (i < j){
            int a = heights[i];
            int b = heights[j];
            prevMax = (j - i) * min(a , b);
            if(prevMax > maxArea) {
                maxArea = prevMax;
            }

            if(a < b) {
                i++;
                a = heights[i];
            } else {
                j--;
                b = heights[j];
            }

            currentMax = (j - i) * min(a , b);

            if(currentMax > maxArea) {
                maxArea = currentMax;
            }
        }
        return maxArea;
    }
};
