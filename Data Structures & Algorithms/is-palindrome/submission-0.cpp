class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(),
            [](unsigned char c) {
                return !isalnum(c);
            }), s.end());

        for(auto &x: s) {
            x = tolower(x);
        }

        string an = s;
        reverse(s.begin() , s.end());
        
        if(s == an) {
            return true;
        }
        return false;
        
    }
};