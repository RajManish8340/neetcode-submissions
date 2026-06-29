class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        array<array<set<char>,9>,3> seen;

        for(int i = 0 ; i < 9 ; i++) {
            for(int j = 0 ; j < 9 ; j++) {
                char value = board[i][j];

                if(value == '.') {
                    continue;
                }

                int box_no = (i/3)*3 + (j/3);

                if(seen[0][i].count(value)
                ||seen[1][j].count(value)
                ||seen[2][box_no].count(value)) {
                    return false; 
                }
                seen[0][i].insert(value);
                seen[1][j].insert(value);
                seen[2][box_no].insert(value);
            }
        }
        return true;
    }
};
