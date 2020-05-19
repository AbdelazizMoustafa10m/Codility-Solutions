int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i,diff=0,minimal=0,leftsum=A[0],rightsum=0;
    for(i=1;i<N;i++)
    {
        rightsum+=A[i];
    }
    minimal = abs(leftsum-rightsum);
    for(i=1;i<N-1;i++)
    {
        leftsum+=A[i];
        rightsum-=A[i];
        diff = abs(leftsum-rightsum);
        if(diff<minimal)
        {
            minimal = diff;
        }
    }
    return minimal;
}