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

void find(int m,int j,int *p)
{   
    for(;j<=m;j++)
    {
                  if(m==j)
                  {
                          (*p)++;
                          break;
                  }
                  if(m%j==0) find(m/j,j,p);
    }
}
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    int count=0;
                    int *p;
                    p=&count;
                    scanf("%d",&m);
                    find(m,2,p);
                    printf("%d\n",count);
    }

    return 0; 
}
