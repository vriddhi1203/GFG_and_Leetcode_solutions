class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void permute(vector<int>& nums, int i, int n){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        vector<int> freq(100000);
        for(int j=i;j<n;j++){
            if(freq[nums[j]+10000]==0){
                swap(nums[i],nums[j]);
                temp.push_back(nums[i]);
                permute(nums,i+1,n);
                temp.pop_back();
                swap(nums[i],nums[j]);
            }
            freq[nums[j]+10000]++;
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        permute(nums,0,n);
        return ans;
    };
};