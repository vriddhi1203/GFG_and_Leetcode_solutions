class Solution {
public:
    // 1+0=1
    // 1+1=10
    // 0+0=0
    // 10+1=11
    // 0+1=1     
    string addBinary(string a, string b) {
        int carry=0,sum;
        string res="";
        int i=0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(i<a.size() || i<b.size()){
            sum=carry;
            if(i<a.size())
                sum+=a[i]-'0';     //to convert character into integer
            if(i<b.size())
                sum+=b[i]-'0';     //to convert character into integer
            if(sum==0){
                carry=0;
                res+='0';
            }
            else if(sum==1){
                carry=0;
                res+='1';
            }
            else if(sum==2){
                carry=1;
                res+='0';
            }
            else if(sum==3){
                carry=1;
                res+='1';
            }
            i++;
        }
        if(carry==1)
            res+='1';
        reverse(res.begin(),res.end());
        return res;
    }
};
