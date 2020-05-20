// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i, candidate_index=0, count=0;
    // First we find the most likely candidate 
    for(i=0;i<N;i++)
    {
        if(count == 0)
        {
            candidate_index = i;
        }
        if(A[i] == A[candidate_index])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    // verify that the  candidate occurs in more than half of elements
    count = 0;
    for(i=0;i<N;i++)
    {
        if(A[i] == A[candidate_index])
        {
            count++;
        }
    }
    if(count<=N/2)
    {
        return -1;
    }
    return candidate_index;
}