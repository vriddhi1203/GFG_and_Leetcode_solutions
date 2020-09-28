//.................First and last occurrences of X...........//

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,start,end;
	    int arr[100000];
	    cin>>n>>x;
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int count=0,flag,count2=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==x && count==0){
	            start=i;
	            count++;
	        }
	        if(arr[i]>x){
	            end=i-1;
	            break;
	        }
	       else if(arr[i]!=x)
	       count2++;
	    }
	    if(count2==n)
	    cout<<"-1"<<endl;
	    else
	    cout<<start<<" "<<end<<endl;
	}
	return 0;
}