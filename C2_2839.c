#include<stdio.h>

int main(void)
{
    int N;
    int i;
    int sum=0;
    
    scanf("%d",&N);

    while(1)
    {
        if(N<0)
        {
            printf("-1");
            return 0;
        }
        else if(N%5==0)
            break;
        else
        {
            N-=3;
            sum++;
        }
    }
    sum+=N/5;
    
    printf("%d",sum);   
}