class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(),
            [](unsigned char c) {
                return !isalnum(c);
            }), s.end());

        transform(s.begin(), s.end() , s.begin() ,
            [](unsigned char c) {
                return tolower(c);
            });
        int n = s.length();
        for(int i = n -1 ; i >=0 ; i--) {
            if(s[i] != s[n - i -1]) {
                  return false;
            }
        }
        return true;
        
    }
};