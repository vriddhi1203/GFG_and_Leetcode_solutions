#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int count=0,max=a[0];
        for(int i=0;i<n;i++){
            if(a[i]>max)
            max=a[i];
        }
        for(int i=0;i<m;i++){
            if(b[i]>max)
            max=b[i];
        }
        int arr[max]={0};
        for(int i=0;i<n;i++){
            arr[a[i]]++;
        }
        for(int i=0;i<m;i++){
            arr[b[i]]++;
        }
        for(int i=0;i<=max;i++){
            if(arr[i]!=0)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
