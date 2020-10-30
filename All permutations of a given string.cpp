#include <bits/stdc++.h>
using namespace std;
void permutation(string str,int first,int last){
	if(first==last)
		cout<<str<<" ";
	else{
		for(int i=first;i<=last;i++){
			swap(str[first],str[i]); //by using the c++ stl swap function
			permutation(str,first+1,last); //call to the function
			swap(str[first],str[i]); //backtracking
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		int n;
		cin>>str;
		n=str.size();
		permutation(str,0,n-1);
        cout<<endl;
	}
	return 0;
}
