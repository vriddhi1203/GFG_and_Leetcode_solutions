class Solution {
public:
    int findFirstOcc(vector<int>& nums, int target, int n){
        int ans=-1;
        int l=0,h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]<target)
                l=m+1;
            else if(nums[m]>target)
                h=m-1;
            else{
                ans=m;
                h=m-1;
            }
        }
        return ans;
    }
    
    int findLastOcc(vector<int>& nums, int target, int n){
        int res=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target)
                low=mid+1;
            else if(nums[mid]>target)
                high=mid-1;
            else{
                res=mid;
                low=mid+1;
            }
        }
        return res;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> result;
        if(n==1){
            if(nums[0]==target){
                result.push_back(0);
                result.push_back(0);
                return result;
            }
            else{
                result.push_back(-1);
                result.push_back(-1);
                return result;
            }     
        }
        int fo=findFirstOcc(nums,target,n);
        int so=findLastOcc(nums,target,n);
        result.push_back(fo);
        result.push_back(so);
        return result;
    }
};