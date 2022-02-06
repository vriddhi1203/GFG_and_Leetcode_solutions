class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int sum=0,j=0;
        for(int i=n-1;i>=0;i--){
            sum+=(columnTitle[i]-'A'+1)*(pow(26,j));
            j++;
        }
        return sum;
    }
};