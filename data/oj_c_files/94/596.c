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

int main ()
{int k,N;
int sz[500],js[100];
int i,sum=0,e,m;
scanf("%d",&N);
for(k=0;k<N;k++)
                {scanf("%d",&m);
	if(m%2!=0)
    {    sz[sum]=m;
    sum++;
    }
    }
for(k=1; k<=sum; k++)
         {for(i=0;i<sum-k;i++)
         {if(sz[i]>sz[i+1])
         {e=sz[i+1];
		 sz[i+1]=sz[i];
		 sz[i]=e;
			}
	}
}
for(i=0;i<sum;i++)
                  {printf("%d",sz[i]);
                  if(i!=sum-1)
                  {printf(",");
                  }
                       }

return 0;
}

