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
    int a,j,i,c,k,l;
    int b[100000];
    scanf("%d",&a);
    k=0;
    if(a>4)
  {  for(i=3;i<=a;i++)
    {c=0;
                     for(j=2;j<i;j++)
                     {
                                 if(i%j==0)
                                 c=1;    
                                     }
                                     if(c==0)
                                     {b[k]=i;
                                     k++;
                                             }
                     }
    for(i=1;i<k;i++)
    {l=b[i]-b[i-1];
    if(l==2)
    printf("%d %d\n",b[i-1],b[i]);
                    
                    }
                    }
                    else
                    printf("empty");
    getchar();
      getchar();
        getchar();
    
}