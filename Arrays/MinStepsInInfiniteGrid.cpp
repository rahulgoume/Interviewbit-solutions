int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int dist=0;
    for(int i=1;i<A.size();i++)
     {
         dist+=abs(A[i]-A[i-1])>abs(B[i]-B[i-1])?abs(A[i]-A[i-1]):abs(B[i]-B[i-1]);
     }
    
     return dist;
}
