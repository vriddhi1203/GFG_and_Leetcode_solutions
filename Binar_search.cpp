class Solution{
public:
	int searchInSorted(int arr[], int N, int K){
		long long int low=0,high=N-1;
        while(low<=high){
            long long int mid=(low+high)/2;
            if(arr[mid]>K)
            high=mid-1;
            else if(arr[mid]<K)
            low=mid+1;
            else
            return 1;
        }
        return -1;
	}
};