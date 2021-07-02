//.................O(1)space complexity that is without taking an extra matrix....//

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<matrix[i][j];
        }
    }
};

//......................O(N2)space complexity that is with taking an extra matrix...........//

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int>> one,two;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>one[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			two[j][n-i+1]=one[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<two[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}