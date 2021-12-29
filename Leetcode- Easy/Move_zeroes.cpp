class Solution {
public:
    //two pointer approach
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int right=0,left=0;
        for(int i=0;i<n;i++){
            if(nums[right]!=0){
                swap(nums[right],nums[left]);
                left++;
            }
            right++;
        }
    }
};