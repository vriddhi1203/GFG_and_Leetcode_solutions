#include <bits/stdc++.h>
using namespace std;

long long numberOfPaths(int m, int n){
	if(m==1 || n==1)
      return 1;
    return (numberOfPaths(m-1,n) + numberOfPaths(m,n-1));         // going from top to bottom of the matrix
}

int main(){
	int m,n;
	cin>>m>>n;
	cout<<numberOfPaths(m,n);
	return 0;
}