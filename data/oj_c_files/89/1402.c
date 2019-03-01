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
      int n,*p,i,j,a,b;
      scanf("%d",&n);
      p=(int *)malloc(n*sizeof(int));
      for(i=0;i<n;i++) p[i]=0;
      scanf("%d%d",&a,&b);
      while(a!=0 || b!=0)
      {
            p[b]++;
            scanf("%d%d",&a,&b);
      }
      for(i=0;i<n;i++) if(p[i]==n-1) {printf("%d",i);break;}
      if(i==n) printf("NOT FOUND");
}
