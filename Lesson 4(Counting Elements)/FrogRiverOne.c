// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int *leaves = calloc(X+1,sizeof(int));
    int i,steps=0,earlist = -1;
    for(i=0;i<N;i++)
    {
        if(leaves[A[i]] == 0)
        {
            //mark it as available
            leaves[A[i]] = 1;
            steps++;
            if(steps == X)
            {
                earlist = i;
            }
        }
    }
    return earlist;
}