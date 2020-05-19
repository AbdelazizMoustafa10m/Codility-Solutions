int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    int i,j,zero_count=0,max_count=0,ret_value=0;
    for(i=0;i<32;i++)
    {
        if(N&(1U<<i))
        {
            for(j=i+1;j<32;j++)
            {
                if(N&(1U<<j))
                {
                    if(zero_count>max_count)
                    {
                        max_count  = zero_count;
                    }
                    zero_count=0;
                    break;
                }
                else{
                    zero_count++;
                }
            }
        }
    }
    if(max_count!=0)
    {
        ret_value= max_count;
    }
    return ret_value;
}
