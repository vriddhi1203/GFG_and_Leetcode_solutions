class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        map<int,int> mp1;
        map<int,int> mp2;
        vector<int> res;
        for(auto i: nums1){
            mp1[i]++;
        }
        for(auto i: nums2){
            mp2[i]++;
        }
        for(auto j: mp1){
            if(mp2[j.first]>0)
                res.push_back(j.first);
        }
        return res;
    }
};