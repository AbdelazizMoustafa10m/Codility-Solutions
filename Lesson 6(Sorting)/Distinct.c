// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

// compartor function used by the quick sort function qsort()
static int cmp (const void *a, const void *b)
{
    return (*(const int *)a) - (*(const int *)b);
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    // this function is found in stdlib.h file that immplements quick sort Algorithm
    qsort(A,N,sizeof(int),cmp);
    int i, count=0;
    for(i=0;i<N;i++)
    {
        if(A[i]!=A[i+1])
        {
            count++;
        }
    }
    if(N == 1){ count = 1;}
    return count;
}