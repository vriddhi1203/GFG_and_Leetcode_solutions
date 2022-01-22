class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int count1=0,count2=0;
        if(s.length()%2==0){
            int i=0,j=s.length()-1;
            int mid=(i+j)/2;
            while(i<=mid){
                if(s[i]==s[j]){
                    count1+=2;
                    i++;
                    j--;
                }
                else
                    break;
            }
            if(count1==s.length())
                return true;
            else
                return false;
        }
        else{
            int i=0,j=s.length()-1;
            int mid=(i+j)/2;
            while(i<mid){
                if(s[i]==s[j]){
                    count2+=2;
                    i++;
                    j--;
                }
                else
                    break;
            }
            if(count2==s.length()-1)
                return true;
            else
                return false;
        }
        return -1;
    }
};