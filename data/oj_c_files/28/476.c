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
{int n,b[300],num=0,i=0;
char a[300][100];
while(scanf("%s",a[i])!=EOF)
{b[i]=strlen(a[i]);
i=i+1;
}
for(n=0;n<=i-1;n++)
{if(n==0)
printf("%d",b[n]);
else
printf(",%d",b[n]);}
  
   return 0;
}
