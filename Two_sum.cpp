class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int flag=0;
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            ans.push_back(i);
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(j);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
            else
                ans.pop_back();
        }
        return ans;
    }
};


// two pointer appraoch

class Solution{
public: 
    bool hasArrayTwoCandidates(int arr[], int n, int x) {
        sort(arr,arr+n);
        int l=0,r=n-1;
        while(l<r){
            if(arr[l]+arr[r]==x)
            return 1;
            else if(arr[l]+arr[r]<x)
            l++;
            else
            r--;
        }
        return 0;
    }
};