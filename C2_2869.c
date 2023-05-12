#include<stdio.h>
int main(void){
    int down,goal,up,answer=0;

    scanf("%d %d %d",&up,&down,&goal);

    answer=goal/(up-down);

    if(goal%(up-down)!=0)  
        answer++;
    while((answer-1)*(up-down)+up>=goal)    
        answer--;  
        
    printf("%d",answer+1);
}