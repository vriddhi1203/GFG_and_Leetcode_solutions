class Solution {
public:
    int findPivotElement(vector<int>& nums, int n){
        int l=0,h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]<=nums[n-1])
                h=m-1;
            else{
                if(nums[m]>nums[m+1])
                    return m;
                else
                    l=m+1;
            }
        }
        return -1;
    }
    
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        int pivot=findPivotElement(nums,n);
        int ans=nums[pivot+1];
        return ans;
    }
};