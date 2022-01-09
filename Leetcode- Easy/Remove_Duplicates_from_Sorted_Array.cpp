/* Brute Force Approach - taking a set and then storing the array elements in it and then printing it out but that would take extra space and 
 space complexity won't be O(1) there */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        
        return i+1;
    }
};

// another solution with same approach - 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int i=0,j=0;
        while(j<n){
            if(nums[i]==nums[j])
                j++;
            else{
                i++;
                nums[i]=nums[j];
            }
        }
        
        return i+1;
    }
};
