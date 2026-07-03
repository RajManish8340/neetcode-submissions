class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < n ; i++) {
            if(i > 0 && nums[i] == nums[i - 1 ]) continue;

            int j = n - 1 ;
            int k = i + 1 ;

            while(k < j) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    ans.push_back({nums[i] , nums[j] , nums[k]});
                    if(nums[j] != nums[j - 1] && k < j) {
                        j--;
                    } else if(k < j) {
                        do {
                            j--;
                        }while(nums[j + 1] == nums[j] && k < j);
                    }
                    
                    if(nums[k] != nums[k + 1] && k < j) {
                        k++;
                    } else if(k < j) {
                        do {
                            k++;
                        }while(nums[k - 1] == nums[k]);
                        
                    }
                    
                }
    
                int target = -nums[i];

                if( k < j && nums[k] + nums[j] > target) {
                    j--;
                } else if( k < j && nums[k] + nums[j] < target) {
                    k++;
                }
            }
        } 
        return ans;
    }
};
