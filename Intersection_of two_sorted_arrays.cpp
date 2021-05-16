#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int m, int arr2[], int n){
	int i=0,j=0;
	while(i<m && j<n){
		if(arr1[i]<arr2[j])
			i++;
		else if(arr2[j]<arr1[i])
			j++;
		else{
			cout<<arr1[i]<<" ";
			i++; j++;
		}
	}
}

int main(){
	int m,n;
	cin>>m>>n;
	int arr1[m],arr2[n];
	for(int i=0;i<m;i++)
		cin>>arr1[i];
	for(int j=0;j<n;j++)
		cin>>arr2[j];
	intersection(arr1,m,arr2,n);
}
