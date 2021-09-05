//.............Time complexity- O(N log (log N)).................//

class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1 || n==2)
            return 0;
        int cntprimes=0;
        int arr[n+1];
        for(int i=2;i<n;i++){
            arr[i]=1;                //initially taking every number as prime
        }
        for(int i=2;i*i<n;i++){       //used seive of eratosthenes
            if(arr[i]==1){
                for(int j=i*i;j<n;j+=i){
                    arr[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(arr[i])
                cntprimes++;
        }
        return cntprimes;
    }
};