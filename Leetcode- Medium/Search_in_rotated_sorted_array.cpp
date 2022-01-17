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
    
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1 and target==nums[0])
            return 0;
        else if(n==1 and target!=nums[0])
            return -1;
        int pivot=findPivotElement(nums,n);
        int ans;
        if(target<=nums[n-1]){
            int low=pivot+1,high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]<target)
                    low=mid+1;
                else if(nums[mid]>target)
                    high=mid-1;
                else
                    return mid;
            }
            return -1;
        }
        else{
            int low=0,high=pivot;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]<target)
                    low=mid+1;
                else if(nums[mid]>target)
                    high=mid-1;
                else
                    return mid;
            }
            return -1;
        }
    }
};