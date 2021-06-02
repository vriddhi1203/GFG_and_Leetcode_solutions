//........................O(n2) approach (Dynamic Programming)..............................//

#include <bits/stdc++.h>
using namespace std;

int minNoOfJumps(int arr[], int n){
	int jumps[n];
	if(n==0 || arr[0]==0)
	    return -1;   
	jumps[0]=0;
	for(int i=1;i<n;i++){
		jumps[i]=INT_MAX;
		for(int j=0;j<i;j++){
			if(i<=j+arr[j]){
				jumps[i]=min(jumps[i],jumps[j]+1);     //here jumps[i] = minimum no. of jumps needed to reach arr[i] from arr[0]
				break;
			}
		}
	}
	return jumps[n-1];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<minNoOfJumps(arr,n)<<endl;
	}
	return 0;
}



//................................O(n) approach (Greedy)..............................//

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int minJumps(int arr[], int n){
		int jumps=0,hault=0;maximum=0;
		for(int i=0;i<n-1;i++){
			maximum=max(maximum,i+arr[i]);
			if(maximum>=n-1){
				jumps++;
				return jumps;
			}
			if(i==hault){
				hault=maximum;
				jumps++;
			}
		}
		if(hault>=n-1)                 // see the example of arr = {2, 1, 0, 3}
			return jumps;
		return -1;
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
		cout<<ob.minJumps(arr,n)<<endl;
	}
	return 0;
}
