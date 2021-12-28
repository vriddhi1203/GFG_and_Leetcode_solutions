class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int flag=0;
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            ans.push_back(i);
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(j);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
            else
                ans.pop_back();
        }
        return ans;
    }
};