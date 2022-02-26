class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int s=target.size();
        int i=1,k=0;
        while(k<s){
            if(target[k]==i){
                res.push_back("Push");
                i++;
                k++;
            }
            else{
                res.push_back("Push");
                res.push_back("Pop");
                i++;
            }
        }
        return res;
    }
};