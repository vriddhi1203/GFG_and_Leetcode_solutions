//...........Brute force TC- O(N), SP- O(N).......//
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],temp[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
		temp[arr[i]]=i;
	}
	for(int i=0;i<n;i++)
		cout<<temp[i];
    return 0;
}


//......SP- O(1).......//
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
		int old_value=arr[i]%n;
		arr[old_value]=(n*i)+arr[old_value];
	}
	for(int i=0;i<n;i++){
		arr[i]/=n;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i];
	return 0;
}

//......Another appraoch using SP- O(1)...which is better than above code.......//
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int ind, val;
	for(int i=0;i<n;i++){
		if(arr[i]>=0){
			ind=arr[i];
			val=i;
			while(ind!=i){
				int temp=arr[ind];
				arr[ind]=(val+1)*(-1);
				val=ind;
				ind=temp;
				arr[ind]=(val+1)*(-1);
			}
		}
		for(int i=0;i<n;i++){
			arr[i]=((-1)*arr[i])-1;
		}
		for(int i=0;i<n;i++)
			cout<<arr[i];
	}
	return 0;
} 