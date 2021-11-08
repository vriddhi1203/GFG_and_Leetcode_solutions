class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void countSS(vector<int>& candidates, int target, int i){
        if(i==candidates.size()){
            if(target==0)
                ans.push_back(temp);
            return;
        }
        
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0)
            return;
        temp.push_back(candidates[i]);
        countSS(candidates, target-candidates[i], i);      //taking the element
        temp.pop_back();
        countSS(candidates, target, i+1);           //not taking the element
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        countSS(candidates, target, 0);
        return ans;
    }
};