#include <bits/stdc++.h>
using namespace std;

int minSwap(int *arr, int n, int k) {
    int window=0,max_count=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k)
        window++;
    }
    for(int i=0;i<window;i++){
        if(arr[i]<=k)
        max_count++;
    }
    count=max_count;
    for(int i=1;i<=n-window;i++){
        if(arr[i+window-1]<=k)
        count++;
        if(arr[i-1]<=k)
        count--;
        max_count=max(max_count,count);
    }
    return (window-max_count);
}

int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cin>>k;
		cout<<minSwap(arr,n,k)<<endl;
	}
	return 0;
}