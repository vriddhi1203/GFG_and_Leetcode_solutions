//............O(N2) approach................//
/*{8, 3, 1, 2}
   {2, 8, 3, 1}
   {1, 2, 8, 3}
   {3, 1, 2, 8}
   {8, 3, 1, 2}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,max_sum=INT_MIN,index;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++){
        int curr_sum=0;
		for(int j=0;j<n;j++){
			index=(i+j)%n;
			curr_sum+=j*arr[index];
		}
		max_sum=max(curr_sum,max_sum);
	}
	cout<<max_sum;
	return 0;
}


//............O(N) approach...............//

#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr_sum=0,S0=0;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        arr_sum+=A[i];
        S0+=i*A[i];
    }
   int Si=S0,maxi_sum=INT_MIN;
   for(int i=0;i<N-1;i++){
       int Sip1=Si+arr_sum-N*(A[N-1-i]);
       if(Sip1>maxi_sum){
           maxi_sum=Sip1;
       }
       Si=Sip1;
   }
   cout<<maxi_sum;
    return 0;
}