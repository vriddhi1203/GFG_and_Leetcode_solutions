//.............O(N2) time complexity and
// O(1) space complexity............//

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<k%n;i++){
		int temp=arr[n-1];
		for(int j=n-2;j>=0;j++){
			arr[i+1]=arr[i];
		}
		arr[0]=temp;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i];
	return 0;
}

//................O(N)time complexity.....
//O(N) space complexity......//

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	int P[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		P[(i+k)%n]=arr[i];
	}
	for(int i=0;i<n;i++)
		cout<<P[i];
	return 0;
}

//.......O(N)time complexity...............
//O(1)space complexity...............

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int start1=n-k,end1=n-1;
        while(start1<end1){
            int temp=nums[start1];
            nums[start1]=nums[end1];
            nums[end1]=temp;
            start1++;
            end1--;
        }
        int start2=0,end2=n-k-1;
        while(start2<end2){
            int temp=nums[start2];
            nums[start2]=nums[end2];
            nums[end2]=temp;
            start2++;
            end2--;
        }
        int start=0,end=n-1;
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
        for(int i=0;i<n;i++)
            cout<<nums[i];
    }
};