class Solution {
public:
    vector<vector<int>> ans;
    
    void printAllSubsets(vector<int>& nums,int n,int i,vector<int> temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        //chose no to put element in the subset
        printAllSubsets(nums,n,i+1,temp);
        
        //chose yes to put element in the subset
        temp.push_back(nums[i]);
        printAllSubsets(nums,n,i+1,temp);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int> temp;
        printAllSubsets(nums,n,i,temp);
        return ans;
    }
};

// TIME COMPLEXITY- O(N*2^N)
