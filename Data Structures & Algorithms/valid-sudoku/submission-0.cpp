class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<string> seen;

        for(int row = 0; row < 9; row++) {

            for(int col = 0; col < 9; col++) {

                char num = board[row][col];

                if(num == '.') {
                    continue;
                }

                string rowKey =
                    string(1, num) + "row" + to_string(row);

                string colKey =
                    string(1, num) + "col" + to_string(col);

                string boxKey =
                    string(1, num) + "box" +
                    to_string((row / 3) * 3 + col / 3);

                if(seen.find(rowKey) != seen.end() ||
                   seen.find(colKey) != seen.end() ||
                   seen.find(boxKey) != seen.end()) {

                    return false;
                }

                seen.insert(rowKey);
                seen.insert(colKey);
                seen.insert(boxKey);
            }
        }

        return true;
    }
};