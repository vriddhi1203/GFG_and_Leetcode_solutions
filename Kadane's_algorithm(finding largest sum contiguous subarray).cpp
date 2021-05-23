#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int maxSubarraySum(int arr[], int n){
		int maximum=arr[0],sum=0;
		for(int i=0;i<n;i++){
			sum+=arr[i];
			if(sum<0)
				sum=0;
			maximum=max(sum,maximum);
		}
		return maximum;
	}
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];

		Solution ob;
		cout<<ob.maxSubarraySum(arr,n)<<endl;
	}
	return 0;
}