class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i+=2){
            int ans=min(nums[i],nums[i+1]);
            sum+=ans;
        }
        return sum;
    }
};