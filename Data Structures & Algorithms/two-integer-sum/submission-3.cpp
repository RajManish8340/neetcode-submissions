class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size() ; i++) {
            for (int j = i + 1 ; j < nums.size() ; j++ ) {
                int a = nums[i] ;
                int b = nums[j] ;
                
                int sum = a + b ;
                if(sum == target) {
                    vector<int> indexes = {i , j} ;
                    sort(indexes.begin() , indexes.end());
                    return indexes ;
                }
            }
        }
    }
};
