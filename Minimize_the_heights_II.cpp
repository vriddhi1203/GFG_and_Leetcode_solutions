#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n){
	sort(arr,arr+n);
	int minimum=arr[0],maximum=arr[n-1];
	int diff=maximum-minimum;
	for(int i=1;i<n;i++){
		if(k<=arr[i]){
			minimum=min(arr[i]-k,arr[0]+k);
			maximum=max(arr[i-1]+k,arr[n-1]-k);
			diff=min(diff,maximum-minimum);
		}
	}
	return diff;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>k;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		Solution ob;
		cout<<ob.getMinDiff(arr,n)<<endl;
	}
	return 0;
}