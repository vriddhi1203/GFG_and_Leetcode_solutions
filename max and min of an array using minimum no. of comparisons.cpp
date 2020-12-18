#include <bits/stdc++.h>
using namespace std;

struct Pair{
	int max;
	int min;
};

struct Pair getMinMax(int arr, int low, int high){
	struct Pair minmax,mml,mmr;
	int mid;
	if(n==1){
		minmax.max=arr[low];
		minmax.min=arr[high];
		return minmax;
	}
	if(high=low+1){
		if(arr[low]<arr[high]){
			minmax.min=arr[low];
			minmax.max=arr[high];
		}
		else{
			minmax.min=arr[high];
			minmax.max=arr[low];
		}
		return minmax;
	}
	mid=(low+high)/2;
	mml=getMinMax(arr,low,mid);
	mmr=getMinMax(arr,mid+1,high);
	if(mml.min<mmr.min)
		minmax.min=mml.min;
	else
		minmax.min=mmr.min;
	if(mml.max>mmr.max)
		minmax.max=mml.max;
	else
		minmax.max=mmr.max;
	return minmax;
}

int main(){
	int arr[10000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	getMinMax(arr,0,n-1);
	return 0;
}