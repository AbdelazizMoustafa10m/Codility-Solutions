// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#define MAX (1e9)
int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i, eastcount=0, passingcount=0;
    for(i=0;i<N;i++)
    {
        if(A[i] == 0)
        {
            eastcount++;
        }
        else
        {
            passingcount+=eastcount;
        }
        if(passingcount>MAX)
        {
            passingcount = -1;
            break;
        }
    }
    return passingcount;
}