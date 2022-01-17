class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return false;
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        if(s.size()!=n)
            return true;
        return false;
    }
};