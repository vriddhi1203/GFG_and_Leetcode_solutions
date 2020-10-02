using namespace std;

#define ll long long int

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    ll a[x],b[y];
	    for(int i=0;i<x;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<y;i++){
	        cin>>b[i];
	    }
	    
	    int i=0,j=0,c=0;
	    
	    while(c<=x){
	        if(a[i]<=b[j]){
	            i++;
	        }
	        else{
	            j++;
	        }
	        if(j>=y){
	            break;
	        }
	        c++;
	    }
	    
	    for(int i=0;i<j;i++){
	        swap(a[x-i-1],b[i]);
	    }
	    
	    sort(a,a+x);
	    sort(b,b+y);
	    
	    for(int i=0;i<x;i++){
	        cout<<a[i]<<" ";
	    }
	    for(int i=0;i<y;i++){
	        cout<<b[i]<<" ";
	    }
	    cout<<"\n";
	    
	}
	return 0;
}
