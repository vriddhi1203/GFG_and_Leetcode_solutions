//Using Binary Search approach

class Solution {
public:
    int mySqrt(int x) {
        int l=0,h=x;
        while(l<=h){
            long long int mid=(l+h)/2;
            if(mid*mid>x)
                h=mid-1;
            else if(mid*mid==x)
                return mid;
            else{
                if((mid+1)*(mid+1)>x)
                    return mid;
                else
                    l=mid+1;
            }
        }
        return -1;
    }
};

//Brute Force approach (using sqrt built in function)

class Solution {
public:
    int mySqrt(int x) {
        int ans;
        ans=sqrt(x);
        return ans;
    }
};
