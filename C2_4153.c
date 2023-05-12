#include<stdio.h>

int main(void)
{
    int edge[3];
    int answer;
    int i;
    int max;
    int check=0;
    while(1)
    {
        scanf("%d %d %d",&edge[0],&edge[1],&edge[2]);

        if(edge[0]+edge[1]+edge[2]==0)
            break;

        max=0;
        answer=0;
        check=0;
        
        for(i=0 ; i<3 ; i++)
            if(max<edge[i])
                max=edge[i];

        for(i=0 ; i<3 ; i++)
            if(max!=edge[i])
                answer+=edge[i]*edge[i];
        
        max=max*max;
        if(max==answer)
            printf("right\n");
        else   
            printf("wrong\n");

    }
    
}