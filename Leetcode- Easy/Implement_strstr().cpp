class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1=haystack.length();
        int l2=needle.length();
        if(l2==0)
            return 0;
        for(int i=0;i<=l1-l2;i++){
            if(needle[0]==haystack[i] and needle[l2-1]==haystack[i+l2-1]){
                int count=0,k=i;
                for(int j=0;j<l2;j++){
                    if(haystack[k]==needle[j])
                        count++;
                    k++;
                }
                if(count==l2)
                    return i;
            }
        }
        return -1;
    }
};