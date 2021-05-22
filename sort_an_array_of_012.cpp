#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int *sort012(int a[], int n){
		int i=0,low=0,high=n-1,temp;
        while(i<=high){
            if(a[i]==0){
                temp=a[i];
                a[i]=a[low];
                a[low]=temp;
                low++;
                i++;
            }
            else if(a[i]==1){
                i++;
            }
            else{
                temp=a[i];
                a[i]=a[high];
                a[high]=temp;
                high--;
            }
        }
        return a;
	}
};

int main(){
	int t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		 Solution ob;
		 ob.sort012(a,n);

		 for(int i=0;i<n;i++)
		 	cout<<a[i];
	}
}