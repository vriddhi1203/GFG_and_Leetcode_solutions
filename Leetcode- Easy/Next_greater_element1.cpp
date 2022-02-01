class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> res;
        for(int i=0;i<n1;i++){
            int ind=-1;
            bool ans=false;
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    ind=j;
                }
                if(ind!=-1){
                    if(nums2[j]>nums2[ind]){
                        res.push_back(nums2[j]);
                        ans=true;
                        break;
                    }
                }
            }
            if(!ans)
                res.push_back(-1);
        }
        return res;
    }
};