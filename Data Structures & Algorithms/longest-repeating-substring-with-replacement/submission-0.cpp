class Solution {
public:
    int characterReplacement(string s, int k) {
       int ans = 0;
       unordered_map<char, int> charMap;
        int maxFreq = 0;

       int l = 0;

       for(int r = 0 ; r < s.size() ; r++) {
        charMap[s[r]]++;
        maxFreq = max(maxFreq ,charMap[s[r]] );
        while((r - l + 1) - maxFreq > k ) {
            charMap[s[l]]--;
            l++;
        }
        ans = max(r - l + 1 , ans) ;
       }
       return ans ;
    }
};
