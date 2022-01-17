class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        int l=0,h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(m==0 && nums[m]>nums[m+1])
                return m;
            else if(m==n-1 && nums[m]>nums[m-1])
                return m;
            if(nums[m]<nums[m+1])
                l=m+1;
            else if(nums[m]<nums[m-1])
                h=m-1;
            else if(nums[m]>nums[m-1] && nums[m]>nums[m+1])
                return m;
        }
        return -1;
    }
};