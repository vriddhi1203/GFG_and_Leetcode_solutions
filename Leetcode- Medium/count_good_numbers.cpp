class Solution {
public:
    
    long long int getPow(long long int x, long long int y, long long int m){
        if(y==0)
            return 1;
        long long int ans=getPow(x,y/2,m);
        if(y%2==0)
            return ((ans%m)*(ans%m))%m;
        else
            return ((((ans%m)*(ans%m))%m)*x)%m;
    }
    
    long long int countGoodNumbers(long long n) {
        long long int m=1000000007;
        if(n==1)
            return 5;
        long long int poss1=getPow(5,ceil(n/2.0),m);
        long long int poss2=getPow(4,n/2,m);
        return ((poss1%m)*(poss2%m))%m;
    }
};