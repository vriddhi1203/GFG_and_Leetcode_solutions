class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                if(mid==0)
                    return mid;
                else if(nums[mid-1]<target)
                    return mid;
                else
                    h=mid-1;
            }
            else{
                if(mid==n-1)
                    return mid+1;
                else if(nums[mid+1]>target)
                    return mid+1;
                else
                    l=mid+1;
            }
        }
        return -1;
    }
};