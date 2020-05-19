int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int res=A[0];
    int i;
    for(i=1;i<N;i++)
    {
        res^=A[i];
    }
    return res;
}