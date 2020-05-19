int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int range_res = 1;
    int elements_res = A[0];
    int i,missing=0;
    for(i=2;i<N+2;i++)
    {
        range_res^=i;
    }
    for(i=1;i<N+1;i++)
    {
        elements_res^=A[i];
    }
    missing = range_res^elements_res;
    return missing;
}