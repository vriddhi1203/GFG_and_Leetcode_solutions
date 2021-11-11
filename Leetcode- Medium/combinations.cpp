class Solution {
public:
    vector<vector<int>> ans;
    void combinations(int i, int n, int k, vector<int>& temp){
        if(i>n){
            if(temp.size()==k)
                ans.push_back(temp);
            return;
        }
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        temp.push_back(i);
        combinations(i+1,n,k,temp);
        temp.pop_back();
        combinations(i+1,n,k,temp);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        combinations(1,n,k,temp);
        return ans;
    }
};