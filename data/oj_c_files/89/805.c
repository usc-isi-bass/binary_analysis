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
{
      int n,*a,i,j;
      scanf("%d",&n);
      a=(int *)malloc(sizeof(int)*n);
      memset(a,0,sizeof(int));
      for(;;)
      {
             int x,y;
             scanf("%d %d",&x,&y);
             if(x==0&&y==0){break;}
             a[x]--;
             a[y]++;
      }
      for(i=0;i<=n-1;i++)
      {
             if(a[i]==n-1){printf("%d",i);}
      }   
}