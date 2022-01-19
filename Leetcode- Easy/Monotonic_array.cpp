class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return true;
        int inc=0,dec=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1])
                inc++;
            if(nums[i]>=nums[i+1])
                dec++;
        }
        if(inc==n-1 or dec==n-1)
            return true;
        else
            return false;
    }
};