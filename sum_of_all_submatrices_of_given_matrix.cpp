//..............O(N2) solution............//
#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum+=((i+1)*(j+1)*(n-j)*(m-i)*arr[i][j]);      //contribution of element at arr[i][j] in all the submatrices that will be made
		}
	}
	cout<<sum;
	return 0;
}


//...................O(N6) solution..............//
#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int i1=i,j1=j;
			for(int i2=i1;i2<m;i2++){
				for(int j2=j1;j2<n;j2++){
					for(int k=i1;k<=i2;k++){
						for(int l=j1;l<=j2;l++){
							sum+=arr[k][l];
						}
					}
				}
			}
		}
	}
	cout<<sum;
	return 0;
}