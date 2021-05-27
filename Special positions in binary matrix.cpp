class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    bool c=true;
                    for(int k=0;k<mat.size();k++){
                        if(k!=i && mat[k][j]!=0){
                            c=false;
                            break;
                        }
                    }
                    for(int z=0;z<mat[i].size();z++){
                        if(z!=j && mat[i][z]!=0){
                            c=false;
                            break;
                        }
                    }
                    if(c)
                        ans++;
                }
            }
        }
        return ans;
    }
};