class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        for(int i=0;i<s.length();i++){
            int index=indices[i];
            ans[index]=s[i];
        }
        return ans;
    }
};