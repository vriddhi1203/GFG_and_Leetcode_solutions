class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool firstRowZero=false;
        bool firstColZero=false;
        for(int i=0;i<m;i++){
            if(matrix[0][i]==0)
                firstRowZero=true;
        }
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0)
                firstColZero=true;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            if(matrix[0][i]==0){
                for(int j=1;j<n;j++){
                    matrix[j][i]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(matrix[i][0]==0){
                for(int j=1;j<m;j++){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstRowZero){
            for(int i=0;i<m;i++){
                matrix[0][i]=0;
            }
        }
        if(firstColZero){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
    }
};