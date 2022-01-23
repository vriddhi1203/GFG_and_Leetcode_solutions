void printNos(int N)
    {
        //Your code here
        int i=1;
        begin: 
        if(i<=N){
            cout<<i<<" ";
            i++;
            goto begin;
        }
    }