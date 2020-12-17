#include <bits/stdc++.h>
using namespace std;

string reverse_string(string str){
    int k=0;
    int n=str.length();
	for(int i=0;i<=n/2;i++){
        int temp=str[i];
        str[i]=str[n-1-k];
        str[n-1-k]=temp;
        k++;
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    return str;
}

int main(){
	string s;
	cin>>s;
	cout<<"Reversed string is:"<<endl;
	reverse_string(s);
	return 0;
}