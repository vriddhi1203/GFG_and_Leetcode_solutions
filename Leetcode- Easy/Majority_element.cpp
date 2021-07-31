class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        int n=nums.size(),ans;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(auto i: count){
            if(i.second>(n/2)){
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};