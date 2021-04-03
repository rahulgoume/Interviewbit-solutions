int Solution::maxSubArray(const vector<int> &A) {
    int sum=0,max_sum=A[0],i;
    int n=A.size();
 
    for(i=1;i<n;i++)
     {
        sum+=A[i];
        if(max_sum<sum)
          max_sum=sum;
          
        if(sum<0)
          sum=0;
     }
    
    return max_sum;
}
