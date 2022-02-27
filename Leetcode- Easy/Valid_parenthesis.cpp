class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)
            return false;
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                else if(st.top()=='('){
                    if(s[i]==')')
                        st.pop();
                    else
                        return false;
                }
                else if(st.top()=='{'){
                    if(s[i]=='}')
                        st.pop();
                    else
                        return false;
                }
                else if(st.top()=='['){
                    if(s[i]==']')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(!st.empty())
            return false;
        else
            return true;
    }
};