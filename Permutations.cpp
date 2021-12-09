class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;
    void permute(vector<int>& nums, int i, int n){
        if(i==n){
            res.push_back(temp);
            return;
        }
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            temp.push_back(nums[i]);
            permute(nums,i+1,n);
            temp.pop_back();
            swap(nums[i],nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        permute(nums,0,n);
        return res;
    }
};