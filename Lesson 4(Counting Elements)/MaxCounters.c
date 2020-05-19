// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int N, int A[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int *counter = (int*)calloc(N,sizeof(int));
    int max=0,lastincrease=0,i;
    for(i=0;i<M;i++)
    {
        if(A[i]<=N)
        {
            if(counter[A[i]-1]<lastincrease)
            {
                counter[A[i]-1] = lastincrease;
            }
            counter[A[i]-1]++;
            if(max<counter[A[i]-1])
            {
                max = counter[A[i]-1];
            }
        }
        else
        {
            lastincrease = max;
        }
    }
    for(i=0;i<N;i++)
    {
        if(counter[i]<lastincrease)
        {
            counter[i] = lastincrease;
        }
    }
    result.C = counter;
    result.L = N;
    return result;
}