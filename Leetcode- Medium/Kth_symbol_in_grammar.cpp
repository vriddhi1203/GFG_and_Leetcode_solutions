class Solution {
public:
    int func(int l, int h, int k, int curr){
        if(l==h)
            return curr;
        
        int mid=(l+h)/2;
        if(k>mid){
            return func(mid+1,h,k,1-curr);
        }
        else{
            return func(l,mid,k,curr);
        }
    }
    
    int kthGrammar(int n, int k) {
        int size=pow(2,n-1);
        int l=1,h=size;
        return func(l,h,k,0);
    }
};