class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0)
                continue;
            else{
                int temp=nums[i];
                for(int j=i-1;j>=k;j--)
                    nums[j+1]=nums[j];
                nums[k]=temp;
                k++;
            }
        }
        return nums;
    }
};