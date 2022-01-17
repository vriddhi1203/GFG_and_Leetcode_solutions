class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0,h=n-1;
        while(l<=h){
            int m=(l+h)/2;
            if(m==0 && arr[m]>arr[m+1])
                return m;
            else if(m==n-1 && arr[m]>arr[m-1])
                return m;
            if(arr[m]<arr[m+1])
                l=m+1;
            else if(arr[m]<arr[m-1])
                h=m-1;
            else if(arr[m]>arr[m-1] && arr[m]>arr[m+1])
                return m;
        }
        return -1;
    }
};