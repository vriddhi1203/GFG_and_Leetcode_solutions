class Solution {
public:
    int visited[100005]={0};
    int max_length=0;
    
    void findmaxlength(int i, int length, vector<int>& nums){
        if(visited[i]==1){
            max_length=max(length, max_length);
            return;
        }
        visited[i]=1;
        length++;
        findmaxlength(nums[i], length, nums);
    }
    
    int arrayNesting(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(visited[i]==0){
                int length=0;
                findmaxlength(i, length, nums);
            }
        }
        return max_length;
    }
};