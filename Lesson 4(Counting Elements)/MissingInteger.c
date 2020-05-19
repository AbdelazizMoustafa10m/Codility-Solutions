// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int *seen = (int*)calloc(N,sizeof(int));
    int i;
    for(i=0;i<N;i++)
    {
        if(A[i]>0 && A[i]<=N)
        {
            seen[A[i]-1] = 1;
        }
    }
    for(i=0;i<N;i++)
    {
        if(seen[i] == 0)
        {
            return i+1;
        }
    }
    return N+1;
}
