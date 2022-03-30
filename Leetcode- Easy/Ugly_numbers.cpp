//............Brute force approach.............//
class Solution {
public:
    bool isUgly(int n) {
    	if(n==0)
    		return false;
        while(n%2==0)
            n=n/2;
        while(n%3==0)
            n=n/3;
        while(n%5==0)
            n=n/5;
        if(n==1)
            return true;
        return false;
    }
};

//........Dynamic Programming approach (finding the 11th ugly number after findinf 10 ugly numbers,n=10)......//
int uglyNumber(int n){
	int c2=0,c3=0,c5=0;
	int dp[n+1];
	dp[0]=1;
	for(int i=1;i<=n;i++){
		dp[i]=min(2*dp[c2],3*dp[c3],5*dp[c5]);
		if(2*dp[c2]==dp[i])
			c2++;
		if(3*dp[c3]==dp[i])
			c3++;
		if(5*dp[c5]==dp[i])
			c5++;
	}
	return dp[n-1];
}