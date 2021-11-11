class Solution {
public:
    vector<vector<int>> ans;
    void combinationSum(int i, int j, int k, int n, vector<int>& temp){
        if(i>j){
            int sum=0;
            for(int i=0;i<temp.size();i++)
                sum+=temp[i];
            if(sum==n && temp.size()==k)
                ans.push_back(temp);
            return;
        }
        temp.push_back(i);
        combinationSum(i+1,j,k,n,temp);
        temp.pop_back();
        combinationSum(i+1,j,k,n,temp);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        combinationSum(1,9,k,n,temp);
        return ans;
    }
};