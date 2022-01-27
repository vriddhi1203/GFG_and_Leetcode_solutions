class Solution {
public:
    int func(int m,vector<vector<int>>& matrix,int n){
        int sum=0; 
        for(int i=0;i<n;i++){
            int low=0, high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(mid==0 and matrix[i][mid]>m){
                    break;
                }
                else if(matrix[i][mid]>m and matrix[i][mid-1]<=m){
                    sum+=mid;
                    break;
                }
                else if(matrix[i][mid]<=m){
                    if(mid==n-1){
                        sum=sum+mid+1;
                        low=mid+1;
                    }
                    else
                        low=mid+1;
                }
                else
                    high=mid-1;
            }
        }
        return sum;
    }
        
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size(); 
        int mini=INT_MAX, maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,matrix[i][0]);
            maxi=max(maxi,matrix[i][n-1]);
        }
        int l=mini, h=maxi;
        while(l<=h){
            int m=(l+h)/2;
            int cnt=func(m,matrix,n);
            if(cnt<k)
                l=m+1;
            else{
                int cnt2=func(m-1,matrix,n);
                if(cnt2<k)
                    return m;
                else
                    h=m-1;
            }
        }
        return -1;
    }
};