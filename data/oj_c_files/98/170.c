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
char x[500][50]={0};
    int i,j,m,k,total,temp,y[500];
    scanf("%d",&k);
    temp=k;
    for(i=0;i<=k-1;i++)
    scanf("%s",x[i]);
    for(i=0;i<=k-1;i++)
    y[i]=strlen(x[i]);
    for(i=0;;)
    {
                 printf("%s",x[i]);
                 total=y[i];
                 temp--;
                 for(j=i+1;;j++)
                 {
                                total=total+y[j]+1;
                                if(total>80) break;
                                temp--;
                                if(temp==0) break;
                 }
                 if(temp!=0)
                 {
                 for(m=i+1;m<=j-1;m++)
                 printf(" %s",x[m]);
                 printf("\n");
                 i=j;
                 }
                 else 
                 {
                      for(m=i+1;m<=k-1;m++)
                      printf(" %s",x[m]);
                      printf("\n");
                      break;
                 }
    }
return 0;
}