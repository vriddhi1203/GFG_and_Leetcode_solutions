class Solution {
public:
    vector<string> s;
    string str="";
    void parenthesis(int n, int i, int l, int r){
        if(i==2*n){
            s.push_back(str);
            return;
        }
        if(l==r){
            str+='(';
            parenthesis(n,i+1,l+1,r);
            str.pop_back();
            
        }
        else if(l>r){
            if(l==n){
                str+=')';
                parenthesis(n,i+1,l,r+1);
                str.pop_back();
            }
            else{
                str+='(';
                parenthesis(n,i+1,l+1,r);
                str.pop_back();
                str+=')';
                parenthesis(n,i+1,l,r+1);
                str.pop_back();
            }
        }
    }
    
    vector<string> generateParenthesis(int n) {
        parenthesis(n,0,0,0);
        return s;
    }
};