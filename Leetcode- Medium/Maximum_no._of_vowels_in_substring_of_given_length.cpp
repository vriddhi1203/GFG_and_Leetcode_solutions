//....................O(N2)solution.................//
class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        if(n==0)
            return 0;
        int max_count=0;
        for(int i=0;i<=n-k;i++){
            int count=0;
            for(int j=i;j<i+k;j++){
                if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u')
                    count++;
            }
            max_count=max(max_count,count);
        }
        return max_count;
    }
};

//......................O(N)solution.......................//

class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        if(n==0)
            return 0;
        int max_count=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
                max_count++;
        }
        int count=max_count;
        for(int i=1;i<=n-k;i++){
            if(s[i+k-1]=='a' or s[i+k-1]=='e' or s[i+k-1]=='i' or s[i+k-1]=='o' or s[i+k-1]=='u')
                count++;
            if(s[i-1]=='a' or s[i-1]=='e' or s[i-1]=='i' or s[i-1]=='o' or s[i-1]=='u')
                count--;
            max_count=max(count,max_count);
        }
        return max_count;
    }
};