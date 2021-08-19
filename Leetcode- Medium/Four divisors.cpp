class Solution {
public:
    vector<long long int> getDivisors(long long int n){
        vector<long long int> answer;
        for(int i=1;i<sqrt(n);i++){
            if(n%i==0){
                answer.push_back(i);
                answer.push_back(n/i);
            }
        }
        long long int x=sqrt(n);
        if(x*x==n)
            answer.push_back(x);
        return answer;
    }
    long long int sumFourDivisors(vector<int>& nums) {
        long long int m=nums.size();
        long long int sum=0;
        for(int j=0;j<m;j++){
            vector<long long int> divisors=getDivisors(nums[j]);
            if(divisors.size()==4){
                for(int k=0;k<4;k++)
                    sum+=divisors[k];
            }
        }
        return sum;
    }
};