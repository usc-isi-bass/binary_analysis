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
int de(int m,int t);
    int m,t,total;
    scanf("%d%d",&m,&t);
    total=de(m,t);
    printf("%d\n",total);
}

int de(int x,int y)
{
    int i,j,p,q;
    for(i=1;;i++)
    {
                 p=0;
                 q=i;
                 for(j=1;j<=x;j++)
                 {
                                  if(q%x==y)
                                  {
                                            q=q-q%x-q/x;
                                            p++;
                                  }
                                  if(q%x!=y)
                                  break;
                 }
                 if(p==x&&q>0) break;
    }
    return(i);
}


