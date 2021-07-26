//......this is using counting of every character taking two additional vectors.....//

class Solution {
public:
    bool checkanagram(vector<int> freq1,vector<int> freq2){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(28,0);
        vector<int> freq2(28,0);
        if(s1.size()>s2.size())
            return false;
        
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
        }
        for(int i=0;i<s1.size();i++){
            freq2[s2[i]-'a']++;
        }
        if(checkanagram(freq1,freq2))
            return true;
        int window=s1.size();
        while(window<s2.size()){
            freq2[s2[window]-'a']++;
            freq2[s2[window-s1.size()]-'a']--;
            if(checkanagram(freq1,freq2))
                 return true;
            window++;
        }
        return false;
    }
};