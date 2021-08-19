class Solution {
public:
    
    int gcd(int a, int b){
        if(b>0){
            return gcd(b,a%b);
        }
        
        return a;
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()==1)
            return false;
        int n=deck.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[deck[i]]++;
        }
        int g=-1;
        for(auto i: mp){
            if(g==-1)
                g=i.second;
            else{
                g=gcd(g,i.second);
            }
        }
        if(g==1)
            return false;
        else
            return true;
    }
};