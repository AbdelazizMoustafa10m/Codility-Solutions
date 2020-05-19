struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int i,j;
    
    for(i=0;i<K;i++)
    {
        // store last element in temp variable
        int temp = A[N-1];
        // rotate the array by 1
        for(j=N-1;j>0;j--)
        {
            A[j] = A[j-1];
        }
        // Add the Last element in temp to the First position
        A[0] = temp;
    }
    
    result.A = A;
    result.N = N;
    return result;
}