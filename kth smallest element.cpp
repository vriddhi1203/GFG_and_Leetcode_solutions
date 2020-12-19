#include <bits/stdc++.h>
using namespace std;

int kth_smallest_element(int arr[],int l,int r,int k){
	int v=r+1;
	sort(arr,arr+v);
	return arr[k-1];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int arr[n];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int k;
		cin>>k;
		cout<<kth_smallest_element(arr,0,n-1,k)<<endl;
	}
}