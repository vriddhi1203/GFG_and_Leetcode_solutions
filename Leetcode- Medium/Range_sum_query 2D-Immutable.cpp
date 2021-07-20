class NumMatrix {
public:
    vector<vector<int>> mat2;
    NumMatrix(vector<vector<int>>& matrix) {
        mat2=matrix;
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==0 || n==0)
            return;
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                mat2[i][j]+=mat2[i][j-1];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                mat2[j][i]+=mat2[j-1][i];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int a=0,b=0,c=0;
        if(col1!=0)
            a=mat2[row2][col1-1];
        if(row1!=0)
            b=mat2[row1-1][col2];
        if(row1!=0 and col1!=0)
            c=mat2[row1-1][col1-1];
        int total=mat2[row2][col2]-a-b+c;
        return total;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */