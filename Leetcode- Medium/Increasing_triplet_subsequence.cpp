class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        vector<int> pmin(n);
        vector<int> smax(n);
        
        pmin[0]=nums[0];
        for(int i=1;i<n;i++){
            pmin[i]=min(pmin[i-1],nums[i]);
        }
        smax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            smax[i]=max(smax[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]>pmin[i-1] && nums[i]<smax[i+1])
                return true;
        }
        return false;
    }
};