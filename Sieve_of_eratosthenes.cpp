class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        vector<int> primes(N+1,1);
        vector<int> primenumbers;
        if(N==1 || N==0 ){
			primenumbers.push_back(0);	
			return primenumbers;
		}
		else if(N==2){
			primenumbers.push_back(2);	
			return primenumbers;
		}
		for(int i=2;i*i<=N;i++){
			if(primes[i]==1){
				for(int j=i;j*i<=N;j++){
					primes[j*i]=0;
					}
			}
		}
		for(int i=2;i<=N;i++){
		    if(primes[i])
		    primenumbers.push_back(i);
		}
		return primenumbers;
    }
};