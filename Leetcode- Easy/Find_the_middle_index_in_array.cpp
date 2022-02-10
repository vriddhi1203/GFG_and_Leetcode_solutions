class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixsum;
        vector<int> suffixsum;
        int num=0;
        for(int i=0;i<n;i++){
            if(i==0)
                prefixsum.push_back(0);
            else{
                num+=nums[i-1];
                prefixsum.push_back(num);
            }
        }
        num=0;
        for(int i=n-1;i>=0;i--){
            if(i==n-1)
                suffixsum.push_back(0);
            else{
                num+=nums[i+1];
                suffixsum.push_back(num);
            }
        }
        reverse(suffixsum.begin(),suffixsum.end());
        for(int i=0;i<n;i++){
            if(prefixsum[i]==suffixsum[i])
                return i;
        }
        return -1;
    }
};