class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0)
            return 0;
        int Pmax[n];
        Pmax[0]=height[0];
        for(int i=1;i<height.size();i++){
            Pmax[i]=max(Pmax[i-1],height[i]);
        }
        int Smax[n];
        Smax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
        Smax[i]=max(Smax[i+1],height[i]);
        }
        int ans=0,decide_height;
        for(int i=1;i<n-1;i++){
        decide_height=min(Pmax[i],Smax[i]);
        if(height[i]>decide_height)
            break;
        else{
            int ht=decide_height-height[i];
            ans+=ht;
           }
       }
    return ans;
    }
};
