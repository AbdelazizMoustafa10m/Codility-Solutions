// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i, candidate=0, count=0;
    int candidatecount=0, leadercount =0, equileader =0;
    // find a candidate
    for(i=0;i<N;i++)
    {
        if(count == 0){ 
            candidate = A[i];
        }
        if(A[i] == candidate){
            count++;
        }
        else { count--; }
    }
    if(count == 0){ return 0; } // there is no leader
    // check if a candidate is really a leader
    for(i=0;i<N;i++)
    {
        if(A[i] == candidate)
        {
            candidatecount++;
        }
    }
    if(candidatecount<=N/2) { return 0; } //there is no leader so, no equileader
    int leader = candidate;
    // find if there is a equileader
    for(i=0;i<N;i++)
    {
        if(A[i] == leader) { leadercount++; }
        int rightside_leader = candidatecount - leadercount;
        if((leadercount> (i+1)/2) && (rightside_leader>(N-i-1)/2))
        {
            equileader++;
        }
    }
    return equileader;
}