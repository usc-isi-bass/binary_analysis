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

main()
{ int n,k=0,i,j,r,c,t,*a,p;
  scanf("%d%d",&r,&c);
  a=(int*)calloc(r*c,sizeof(int));
  for(i=0;i<r*c;i++)
  scanf("%d",a+i);
  for(i=0;i<c;i++)
  { j=0;t=i;
    while(t>=0&&j<r)
    { printf("%d",*(a+j*c+t));
      printf("\n");
      t--;j++;
    }
  }

  for(i=1;i<r;i++)
  { j=c-1;t=i;
    while(t<r&&j>=0)
    {   printf("%d",*(a+t*c+j));
	if(!(j==c-1&&t==r-1))printf("\n");
	j--;t++;
    }
  }
}