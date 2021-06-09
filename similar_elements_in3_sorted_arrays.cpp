/*.....................using unordered map(hash map)........................//
Time complexity - O(n1+n2+n3)
space complexity - O(n1+n2+n3) */

#include <bits/stdc++.h>
using namespace std;


	void commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            if(n1==0 || n2==0 || n3==0)
            cout<<-1<<endl;
            else{
            unordered_map <int, int> m1,m2,m3;
            vector<int> v;
            for(int i=0;i<n1;i++){
                m1[A[i]]++;
            }
            for(int j=0;j<n2;j++){
                m2[B[j]]++;
            }
            for(int k=0;k<n3;k++){
                m3[C[k]]++;
            }
            int k=0;
            for(int i=0;i<n1;i++){
                if(m1[A[i]]>0 and m2[A[i]]>0 and m3[A[i]]>0){
                    v.push_back(A[i]);
                }
                m1[A[i]]=0;
            }
            }
            return v;
        }     


int main(){
	int t;
	cin>>t;
	while(t--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		int A[n1],B[n2],C[n3];
		for(int i=0;i<n1;i++) 
        cin>>A[i];
		for(int i=0;i<n2;i++) 
        cin>>B[i];
		for(int i=0;i<n3;i++) 
        cin>>C[i];
	vector int result = commonElements(A, B, C, n1, n2, n3);
    if(result.size()==0)
        cout<<-1;
    else
        for(int i=0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;
    }
	return 0;
}





/*.....................using 3 pointer approach........................//
Time complexity - O(n1+n2+n3)
space complexity - O(1) */

#include <bits/stdc++.h>
using namespace std;

vector <int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3){
    int i=0,j=0,k=0;
    vector<int> v;
    while(i<n1 and j<n2 and k<n3){
        if(i>0 and j>0 and k>0){
            int num1=A[i-1];
            while(num1==A[i] and i<n1)
                i++;
            int num2=B[j-1];
            while(num2==B[j] and j<n2)
                j++;
            int num3=C[k-1];
            while(num3==C[k] and k<n3)
                k++;
        }
        if(A[i]==B[j] and B[j]==C[k]){
            v.push_back(A[i]);
            i++; j++; k++;
        }
        if(A[i]<B[j])
            i++;
        if(B[j]<C[k])
            j++;
        else
            k++;
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int A[n1],B[n2],C[n3];
        for(int i=0;i<n1;i++) 
        cin>>A[i];
        for(int i=0;i<n2;i++) 
        cin>>B[i];
        for(int i=0;i<n3;i++) 
        cin>>C[i];
    vector <int> result = commonElements(A, B, C, n1, n2, n3);
    if(result.size()==0)
        cout<<-1;
    else
        for(int i=0;i<result.size();i++)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
