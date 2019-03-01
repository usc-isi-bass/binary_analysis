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
      int i,j,n,m;
      int f[20]={1,1},a[100];
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {scanf("%d",&m);
      
      for(j=2;j<20;j++)
      f[j]=f[j-2]+f[j-1];
      printf("%d\n",f[m-1]);
      }
      getchar();
      getchar();
      }