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
      int n,i,a[20],j,f[21];
      scanf("%d\n",&n);
      for(i=0;i<n;i++)
      {scanf("%d",&a[i]);}
      f[1]=1;
      f[2]=1;
      for(j=3;j<=20;j++)
      {f[j]=f[j-1]+f[j-2];}
      for(i=0;i<n;i++)
      {
      printf("%d\n",f[a[i]]);}
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
      }
