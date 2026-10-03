class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        vector<int>ZeroRows(row,0);
        vector<int>ZeroCols(col,0);

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    ZeroRows[i]=1;
                    ZeroCols[j]=1;
                }
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(ZeroRows[i] || ZeroCols[j]){
                    matrix[i][j]=0;
                }

            }
        }

        
    }
};
