class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res="";
        int n=columnNumber;
        while(n!=0){
            int num=n%26;
            n/=26;
            if(num==0){
                res.push_back('Z');
                n--;
            }
            else{
                res.push_back(num-1+'A');
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};