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

main() { int f[20],a[20],i,j,n;
 scanf("%d",&n);
 
 f[1]=1; f[2]=1;
for(i=2;i<=20;i++)
    f[i+1]=f[i]+f[i-1];

for(i=1;i<=n;i++)
   { scanf("%d",&a[i]);
printf("\n");  }
for(j=1;j<=n;j++)
 { printf("%d",f[a[j]]);
printf("\n");  }

    }
   