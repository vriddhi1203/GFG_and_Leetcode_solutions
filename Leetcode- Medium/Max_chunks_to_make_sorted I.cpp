//............O(N) Time complexity using prefix max approach.........// 

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        if(arr.size()==0)
            return 0;
        int Pmax=arr[0],max_chunks=0;
        if(arr.size()==1 || arr[0]==0)
            max_chunks=1;
        for(int i=1;i<arr.size();i++){
            Pmax=max(Pmax,arr[i]);
            if(Pmax==i)
                max_chunks++;
        }
        return max_chunks;
    }
};


//.............O(N2) using permutations approach ..........//


bool get_max_chunks(int i, int j){
    int cnt=0;
    for(int k=i;k<=j;k++){
        if(arr[i]>=i and arr[i]<=j)
            cnt++;
    }
    if(cnt==j-i+1)
        return true;
    else
        return false;
}

int i=0,count=0;
while(i<n){
    for(int j=i;j<n;j++){
        if(get_max_chunks(i,j))
            break;
    }
    i=j+1;
    count++;
}