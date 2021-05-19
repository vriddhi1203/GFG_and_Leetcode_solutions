#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int m, int arr2[], int n){
	set<int> hs;
	for(int i=0;i<m;i++)
		hs.insert(arr1[i]);

	for(int i=0;i<n;i++){
		if(hs.find(arr2[i])!=hs.end())
			cout<<arr2[i]<<" ";
	}
}

int main(){
	int m,n;
	cin>>m>>n;
	int arr1[m],arr2[n];
	for(int i=0;i<m;i++)
		cin>>arr1[i];

	for(int i=0;i<n;i++)
		cin>>arr2[i];
	intersection(arr1,m,arr2,n);
	return 0;
}