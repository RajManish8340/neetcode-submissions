class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = 0;

        for(i ; i< numbers.size(); i++) {
            for(j ; j < numbers.size() ; j++) {
                if(i != j && i < j) {
                    if(numbers[i] + numbers[j] == target){
                        return {i+1 , j+1};
                    }
                }
            }
        }
    }
};
