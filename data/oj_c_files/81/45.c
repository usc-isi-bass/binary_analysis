#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int p[5][5];
int n,m;
int main()
{
    int exchange();
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            scanf("%d",&p[i][j]);
    scanf("%d %d",&n,&m);
    if(exchange())
       for(int i=0;i<5;i++)
           {
           printf("%d",p[i][0]);
            for(int j=1;j<5;j++)
                printf(" %d",p[i][j]);
           printf("\n");  
           }
    else
        printf("error");
        
}
int exchange()
{
    if(n<5&&n>=0&&m<5&&m>=0)
       {
       for(int i=0;i<5;i++)
           {
           int temp=p[n][i];
           p[n][i]=p[m][i];
           p[m][i]=temp;    
           }          
       return 1;           
       }    
    else
        return 0;
}
