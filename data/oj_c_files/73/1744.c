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

int main()
{
    int n[5][5],i,j,flag,a,b;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    scanf("%d",&n[i][j]);
    for(i=0,flag=0,b=0;i<5;i++)
    for(j=0;j<5;j++)
    {
                    for(a=0;a<5;a++)
                    if(n[a][j]<n[i][j])
                    flag=1;
                    for(a=0;a<5;a++)
                    if(n[i][a]>n[i][j])
                    flag=1;
                    if(flag==0)
                    {
                               b++;
                               if(b==1)
                               printf("%d %d %d\n",i+1,j+1,n[i][j]);
                               else
                               printf("%d %d %d\n",i+1,j+1,n[i][j]);
                    }
                    flag=0;
    }
    if(b==0)
    printf("not found");
    return 0;
}
