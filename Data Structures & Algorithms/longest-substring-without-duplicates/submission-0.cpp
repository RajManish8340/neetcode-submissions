class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int max_length = 0;
        unordered_set<char> set;

        for (int r = 0; r < s.size(); r++) {
            while (set.find(s[r]) != set.end()) {
                set.erase(s[l]);
                l++;
            }

            set.insert(s[r]);
            int current_max = r - l + 1;
            max_length = max(current_max, max_length);
        }

        return max_length;
    }
};
