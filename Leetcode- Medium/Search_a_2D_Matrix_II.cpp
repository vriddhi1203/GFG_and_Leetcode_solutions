//..........O(N2)solution..............................................//
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ans=0;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==target){
                    ans=1;
                    break;
                }
            }
            if(ans==1)
                break;
        }
        if(ans==1)
            return true;
        else
            return false;
    }

//........................O(N)solution.................................//

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int flag=0;
        int row_size=matrix.size(),coloumn_size=matrix[0].size();
        int row=0;
        int coloumn=matrix[0].size()-1;
        while(row<row_size && row>=0 && coloumn>=0 && coloumn<coloumn_size){
            if(target<matrix[row][coloumn])
                coloumn--;
            
            else if(target>matrix[row][coloumn])
                row++;
            
            else
                return true;
        }
        return false;
    }
};