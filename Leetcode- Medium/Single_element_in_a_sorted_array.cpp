class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        int l=0,h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(m==0){
                if(nums[m]!=nums[m+1])
                    return nums[m];
                else
                    l=m+1;
            }
            else if(m==n-1){
                if(nums[m]!=nums[m-1])
                    return nums[m];
                else
                    h=m-1;
            }
            else if(nums[m]!=nums[m+1] and nums[m]!=nums[m-1])
                return nums[m];
            else{
                int fo,so;
                if(nums[m]==nums[m+1]){
                    fo=m;
                    so=m+1;
                }
                else{
                    fo=m-1;
                    so=m;
                }
                if(fo%2!=0)
                    h=m-1;
                else
                    l=m+1;
            }
        }
        return -1;
    }
};