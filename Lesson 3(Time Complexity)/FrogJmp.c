// Naive Algorithm
/* This solution works fine in terms of correctness but fail performence tests*/

/*
int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    int jumps=0;
    while(Y>X)
    {
	 X+=D;
	 jumps++;
    }
    return jumps;
}
*/

// This Algorithm passes the performonce tests
int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    int jump_dis = Y-X;
    int no_jumps = jump_dis/D + ((jump_dis%D)>0) ;
    return no_jumps;
}