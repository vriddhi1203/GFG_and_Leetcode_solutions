//..............approach while taking pprod and sprod arrays......//
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pprod(n);
        vector<int> sprod(n);
        pprod[0]=nums[0];
        for(int i=1;i<=n-1;i++){
            pprod[i]=pprod[i-1]*nums[i];
        }
        sprod[n-1]=nums[n-1];
        for(int i=n-2;i>=1;i--){
            sprod[i]=sprod[i+1]*nums[i];
        }
        nums[0]=sprod[1];
        nums[n-1]=pprod[n-2];
        for(int i=1;i<=n-2;i++){
            nums[i]=pprod[i-1]*sprod[i+1];
        }
        return nums;
    }
};

//......approach while taking omly sprod array ...........//

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> sprod(n, 1);
        vector<int> res(n);
        sprod[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            sprod[i]=sprod[i+1]*nums[i];
        }
        res[0]=sprod[1];
        int pprod=1;
        for(int i=1;i<=n-2;i++){
            pprod*=nums[i-1];
            res[i]=pprod*sprod[i+1];
        }
        res[n-1]=pprod*nums[n-2];
        return res;
    }
};