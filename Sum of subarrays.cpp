//................O(N2) solution................//
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,overall_sum=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=arr[j];
			overall_sum+=sum;
		}
	}
	cout<<overall_sum<<endl;
	return 0;
}


//................O(N) solution...............//
#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
        long long int ans=0,cont;
        const unsigned int m = 1000000007;
        for(int i=0;i<n;i++){
            cont=(((i+1)%m * (n-i)%m)%m * a[i]%m)%m;
            ans=(ans%m + cont%m)%m;
        }
        return ans;
    }
};

int main(){
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	Solution ob;
	cout<<ob.subarraysum(a, n)<<endl;
	return 0;
}