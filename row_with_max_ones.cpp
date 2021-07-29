#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowwithMax1s(vector<vector<int>> arr, int n, int m){
		int j,index,row=-1;
	    int ones=0,max_ones=0;
	    for(int i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            if(arr[i][j]==1){
	                index=j;
	                break;
	            }
	        }
	        ones=m-j;
	        if(ones>max_ones){
	            max_ones=ones;
	            row=i;
	        }
	    }
	    return row;
	}
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int>> arr(n, vector<int>(m));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
				cin>>arr[i][j];
		}
		Solution ob;
		auto ans=ob.rowwithMax1s(arr,n,m);
		cout<<ans<<endl;
	}
	return 0;
}